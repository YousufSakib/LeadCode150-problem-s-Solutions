/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function (nums) {
    const preMul = [],
        postMul = [],
        ans = [],
        leng = nums.length;

    preMul.push(1);
    for (let i = 1; i < leng; i++) {
        preMul.push(preMul[i - 1] * nums[i - 1]);
    }
    postMul[leng - 1] = 1;
    ans[leng - 1] = preMul[leng - 1];
    for (let i = leng - 2; i > -1; i--) {
        postMul[i] = nums[i + 1] * postMul[i + 1];
        ans[i] = postMul[i] * preMul[i];
    }
    return ans;
};
