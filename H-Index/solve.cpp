#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        sort(citations.begin(), citations.end());
        int h = 0, tempH, leng = citations.size();
        for (int i = 0; i < leng; i++)
        {
            tempH = h;
            h = min(leng - i, citations[i]);
            h = max(h, tempH);
        }
        return h;
    }
};