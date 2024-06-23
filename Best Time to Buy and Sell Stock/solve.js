/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
    let minPrice = prices[0];
    const minPrices = [null];

    for (let i = 1; i < prices.length; i++) {
        minPrice = Math.min(minPrice, prices[i - 1]);
        minPrices[i] = minPrice;
    }
    // console.log(minPrices);
    let profit = 0;
    for (let i = 1; i < prices.length; i++) {
        profit = Math.max(profit, prices[i] - minPrices[i]);
    }
    return profit;
};
