/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function (height) {
    let leng = height.length;
    const leftLarge = new Array(leng);
    leftLarge[0] = height[0];
    for (let i = 1; i < leng; i++) {
        leftLarge[i] = Math.max(leftLarge[i - 1], height[i]);
    }
    let rightLarge = height[leng - 1];
    let ans = 0;
    for (let i = leng - 2; i >= 0; i--) {
        rightLarge = Math.max(rightLarge, height[i]);
        ans += Math.min(rightLarge, leftLarge[i]) - height[i];
    }
    return ans;
};
