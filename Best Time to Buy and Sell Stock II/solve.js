/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
    const leng = prices.length;
    let sellPrice = prices[0];
    let buyPrice = prices[0];
    let profit = 0;
    for (let i = 1; i < leng; i++) {
        if (sellPrice < prices[i]) {
            sellPrice = prices[i];
        } else if (sellPrice > prices[i]) {
            profit += sellPrice - buyPrice;
            buyPrice = sellPrice = prices[i];
        }
    }
    profit += sellPrice - buyPrice;
    return profit;
};
