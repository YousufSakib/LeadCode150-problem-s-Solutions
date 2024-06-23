#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int sl = s.size();
        int ans = 0;
        for (int i = sl - 1; i >= 0; i--)
        {

            if (ans > 0 && s[i] == ' ')
                break;
            else if (s[i] == ' ')
                continue;
            else
                ans++;
        }
        return ans;
    }
};