/**
 * @param {number} num
 * @return {string}
 */
var intToRoman = function (num) {
    let ans = "";
    const symbol = [
        "M",
        "CM",
        "D",
        "CD",
        "C",
        "XC",
        "L",
        "XL",
        "X",
        "IX",
        "V",
        "IV",
        "I",
    ];
    const value = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1];
    for (let i = 0; i < 13; i++) {
        while (value[i] <= num) {
            num -= value[i];
            ans += symbol[i];
        }
    }
    return ans;
};
