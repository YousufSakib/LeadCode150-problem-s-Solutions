#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        int leng = s.size();
        string ans = "", word = " ";
        bool wordEnd = true;
        for (int i = leng - 1; i >= 0; i--)
        {
            char c = s[i];
            if (wordEnd == false && c == ' ')
            {
                wordEnd = true;
                reverse(word.begin(), word.end());
                ans += word;
                word = " ";
            }
            else if (c != ' ')
            {
                word.push_back(c);
                wordEnd = false;
            }
        }
        if (s[0] != ' ')
        {
            reverse(word.begin(), word.end());
            ans += word;
        }
        ans.pop_back();
        return ans;
    }
};