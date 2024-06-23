var majorityElement = function (nums) {
    const map = new Map();
    const target = Math.floor(nums.length / 2 + 1);
    let ans = nums[0];
    nums.forEach((element) => {
        if (!map[element]) {
            map[element] = 1;
        } else {
            map[element] = map[element] + 1;
            if (target === map[element]) {
                ans = element;
            }
        }
    });
    return ans;
};
