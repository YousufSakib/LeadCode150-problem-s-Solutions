/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
    let correctLength = Math.min(2, nums.length);
    const copyOfNums = [...nums];
    let initialLength = nums.length;
    for (let i = 2; i < initialLength; i++) {
        if (copyOfNums[i] !== copyOfNums[i - 2]) {
            nums[correctLength++] = nums[i];
        }
    }
    return correctLength;
};
