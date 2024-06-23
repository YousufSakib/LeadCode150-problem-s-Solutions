#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        sort(nums1.begin(), nums1.begin() + m);
        sort(nums2.begin(), nums2.end());
        vector<int> temp(m);
        for (int i = 0; i < m; i++)
            temp[i] = nums1[i];

        int tempIndx = 0, nums2Indx = 0, nums1Indx = 0;
        while (true)
        {

            if (tempIndx == m)
            {
                while (nums2Indx < n)
                {
                    nums1[nums1Indx] = nums2[nums2Indx];
                    nums1Indx++;
                    nums2Indx++;
                }
                break;
            }
            else if (nums2Indx == n)
            {
                while (tempIndx < m)
                {
                    nums1[nums1Indx] = temp[tempIndx];
                    nums1Indx++;
                    tempIndx++;
                }
                break;
            }
            else if (temp[tempIndx] < nums2[nums2Indx])
            {
                nums1[nums1Indx] = temp[tempIndx];
                nums1Indx++;
                tempIndx++;
            }
            else
            {
                nums1[nums1Indx] = nums2[nums2Indx];
                nums2Indx++;
                nums1Indx++;
            }
        }
    }
};