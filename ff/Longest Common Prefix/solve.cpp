#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int macL = strs[0].size();
        int len = strs.size();
        for (int i = 0; i < len - 1; i++)
        {
            int tem = 0;
            string *a = &strs[i];
            string *b = &strs[i + 1];
            int leng = min((*a).size(), (*b).size());
            leng = min(leng, macL);
            for (int j = 0; j < leng; j++)
            {
                if ((*a)[j] == (*b)[j])
                    tem++;
                else
                    break;
            }
            macL = min(tem, macL);
            if (macL == 0)
                break;
        }
        return strs[0].substr(0, macL);
    }
};