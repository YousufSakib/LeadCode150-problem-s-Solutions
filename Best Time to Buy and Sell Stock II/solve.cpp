#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int leng = prices.size();
        int sellPrice = prices[0];
        int buyPrice = prices[0];
        int profit = 0;
        for (int i = 1; i < leng; i++)
        {
            if (sellPrice < prices[i])
            {
                sellPrice = prices[i];
            }
            else if (sellPrice > prices[i])
            {
                profit += sellPrice - buyPrice;
                buyPrice = sellPrice = prices[i];
            }
        }
        profit += (sellPrice - buyPrice);
        return profit;
    }
};