#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string convert(string s, int rows)
    {

        if (rows == 1)
            return s;
        string out = "";
        int len = s.size();

        for (int i = 1; i <= rows; i++)
        {
            int rr = rows - i;
            int indx = i - 1;
            for (int j = 1;; j++)
            {
                if (indx >= len)
                    break;
                out.push_back(s[indx]);
                if (i == 1 || i == rows)
                    indx += (rows - 1) * 2;
                else if (j % 2 == 1)
                    indx += rr * 2;
                else if (j % 2 == 0)
                    indx += (i - 1) * 2;
            }
        }
        return out;
    }
};