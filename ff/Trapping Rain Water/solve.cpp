#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int leng = height.size();
        vector<int> leftLarge(leng);
        leftLarge[0] = height[0];
        for (int i = 1; i < leng; i++)
        {
            leftLarge[i] = max(leftLarge[i - 1], height[i]);
        }
        int rightLarge = height[leng - 1];
        int ans = 0;
        for (int i = leng - 2; i >= 0; i--)
        {
            rightLarge = max(rightLarge, height[i]);
            ans += (min(rightLarge, leftLarge[i]) - height[i]);
        }
        return ans;
    }
};