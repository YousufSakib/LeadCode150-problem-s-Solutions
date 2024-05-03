#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int correctLength = 0;
        int initialLength = nums.size();
        for (int i = 0; i < initialLength; i++)
        {
            if (nums[i] != val)
            {
                nums[correctLength++] = nums[i];
            }
        }
        return correctLength;
    }
};
