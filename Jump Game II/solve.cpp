#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    const int maxS = 10e5;
    int jump(vector<int> &nums)
    {
        vector<int> dp(nums.size(), maxS);
        int goal = nums.size() - 1;
        dp[goal] = 0;

        for (int i = goal - 1; i >= 0; i--)
        {
            int range = min(i + nums[i], goal);
            int steps = maxS;
            for (int j = i + 1; j <= range; j++)
            {
                steps = min(steps, 1 + dp[j]);
            }
            dp[i] = steps;
        }
        return dp[0];
    }
};