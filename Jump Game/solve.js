/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function (nums) {
    let availibility = 0;
    let leng = nums.length;
    for (let i = 0; i < leng - 1; i++) {
        if (availibility < i) return false;
        availibility = Math.max(availibility, i + nums[i]);
    }
    return leng - 1 <= availibility;
};
