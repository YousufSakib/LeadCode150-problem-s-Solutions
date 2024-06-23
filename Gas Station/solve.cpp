#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int leng = gas.size();
        int total_cost = 0;
        int total_reso = 0;
        int start = 0, current = 0;
        for (int i = 0; i < leng; i++)
        {
            total_cost += cost[i];
            total_reso += gas[i];
            current += (gas[i] - cost[i]);
            if (current < 0)
            {
                start = i + 1;
                current = 0;
            }
        }
        if (total_cost > total_reso)
            return -1;
        else
            return start;
    }
};