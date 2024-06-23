#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int len = prices.size();
        int buyPrice = prices[0];
        int profit = 0;
        for (int i = 1; i < len; i++)
        {

            if (prices[i - 1] < buyPrice)
                buyPrice = prices[i - 1];

            int sellPrice = prices[i];

            profit = (max(profit, sellPrice - buyPrice));
        }

        return profit;
    }
};