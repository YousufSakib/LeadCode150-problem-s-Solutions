class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int r = numbers.size()-1;
        int l = 0;
        int sum;
        while(true){
            sum = numbers[r] + numbers[l];
            if(sum > target)r--;
            else if(sum < target)l++;
            else return {l+1, r+1};
        }
    }
};
