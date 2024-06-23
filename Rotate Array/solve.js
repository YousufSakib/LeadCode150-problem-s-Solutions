/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function (nums, k) {
    const copyOfNums = [...nums];
    const numsLeng = nums.length;
    k = k % numsLeng;
    if (k == 0) return;
    for (let i = numsLeng - k, j = 0; i < numsLeng; i++, j++) {
        nums[j] = copyOfNums[i];
    }
    for (let i = 0; i < numsLeng - k; i++) {
        nums[i + k] = copyOfNums[i];
    }
};
