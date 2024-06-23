#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int availibility = 0;
        int leng = nums.size();
        for (int i = 0; i < leng - 1; i++)
        {
            if (availibility < i)
                return false;
            availibility = max(availibility, i + nums[i]);
        }
        return leng - 1 <= availibility;
    }
};