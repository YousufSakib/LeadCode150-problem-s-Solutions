/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function (nums, val) {
    let numsLength = nums.length;
    let correctLength = 0;
    for (let i = 0; i < numsLength; i++) {
        if (nums[i] !== val) nums[correctLength++] = nums[i];
    }
    return correctLength;
};
