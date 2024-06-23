#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> fullJustify(vector<string> &words, int maxWidth)
    {
        vector<string> out;

        out.push_back("");
        int occupiedWidth = 0;
        int packedWords = 0;
        int lastCompleted = -1;
        int i = 0, j = 0;
        for (; j < words.size(); j++)
        {
            if (occupiedWidth + packedWords + words[j].size() <= maxWidth)
            {
                // out[i]+=words[j];
                occupiedWidth += words[j].size();
                packedWords++;
            }
            else
            {
                int spaces = 0;

                if (packedWords == 1)
                {
                    out[i] += words[j - 1];
                    spaces = maxWidth - occupiedWidth;
                    out[i] += giveMeEmptyString(spaces);
                    lastCompleted = j - 1;
                }
                else
                {
                    //    |  |  | | |
                    int spaceSlots = packedWords - 1;
                    spaces = maxWidth - occupiedWidth;
                    int spacesEverySlot = spaces / spaceSlots;
                    int first = spaces % spaceSlots;
                    int k = 0;
                    int startingWordIndx = j - packedWords;
                    spaces = spacesEverySlot + 1;
                    string tem = giveMeEmptyString(spaces);
                    for (; k < first; k++)
                    {
                        out[i] += words[startingWordIndx + k];
                        out[i] += tem;
                    }
                    tem.pop_back();
                    for (; k < packedWords - 1; k++)
                    {
                        out[i] += words[startingWordIndx + k];
                        out[i] += tem;
                    }
                    out[i] += words[startingWordIndx + k];
                    lastCompleted = startingWordIndx + k;
                }

                occupiedWidth = 0;
                packedWords = 0;
                i++;
                j--;
                out.push_back("");
            }
        }
        for (j = lastCompleted + 1; j < words.size(); j++)
        {
            out[i] += words[j];
            if (j != words.size() - 1)
                out[i] += " ";
            else
            {
                out[i] += giveMeEmptyString(maxWidth - out[i].size());
            }
        }
        return out;
    }

private:
    string giveMeEmptyString(int n)
    {
        string s = "";
        for (int i = 0; i < n; i++)
            s += " ";
        return s;
    }
};