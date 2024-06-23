#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int candy(vector<int> &r)
    {
        int leng = r.size(), total = 0;
        vector<int> ca(leng, 1);
        for (int i = 1; i < leng; i++)
        {
            if (r[i - 1] < r[i])
            {
                ca[i] = ca[i - 1] + 1;
            }
        }
        for (int i = leng - 2; i >= 0; i--)
        {
            if (r[i + 1] < r[i])
            {
                ca[i] = max(ca[i], ca[i + 1] + 1);
            }
        }

        for (int i = 0; i < leng; i++)
        {
            total += ca[i];
        }

        return total;
    }
};