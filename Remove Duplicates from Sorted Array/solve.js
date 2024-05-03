/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
    const initialLength = nums.length;
    let correctLength = 1;
    for (let i = 1; i < initialLength; i++) {
        if (nums[i - 1] !== nums[i]) {
            nums[correctLength++] = nums[i];
        }
    }
    return correctLength;
};
