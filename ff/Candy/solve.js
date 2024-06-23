/**
 * @param {number[]} ratings
 * @return {number}
 */
var candy = function (ratings) {
    const leng = ratings.length;
    const candies = new Array(leng).fill(1);
    for (let i = 1; i < leng; i++) {
        if (ratings[i - 1] < ratings[i]) {
            candies[i] = candies[i - 1] + 1;
        }
    }
    for (let i = leng - 2; i >= 0; i--) {
        if (ratings[i + 1] < ratings[i]) {
            candies[i] = Math.max(candies[i], candies[i + 1] + 1);
        }
    }
    return candies.reduce((acc, curr) => acc + curr, 0);
};
