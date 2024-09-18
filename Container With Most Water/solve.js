/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    let r = height.length - 1;
    let l = 0;
    let ans = 0;
    let tem;
    while(l < r){
        if(height[r] < height[l]){
            tem = height[r]*(r-l);
            r--;
        }else {
            tem = height[l]*(r-l);
            l++;
        }
        ans = Math.max(ans, tem);
    }
    return ans;
};
