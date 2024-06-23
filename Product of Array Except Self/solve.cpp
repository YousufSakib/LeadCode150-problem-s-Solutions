#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int leng = nums.size();
        vector<int> preMul(leng), postMul(leng), ans(leng);
        preMul[0] = 1;
        for (int i = 1; i < leng; i++)
        {
            preMul[i] = preMul[i - 1] * nums[i - 1];
        }
        postMul[leng - 1] = 1;
        ans[leng - 1] = preMul[leng - 1];
        for (int i = leng - 2; i > -1; i--)
        {
            postMul[i] = nums[i + 1] * postMul[i + 1];
            ans[i] = postMul[i] * preMul[i];
        }
        return ans;
    }
};