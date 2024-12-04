class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxVal = INT_MIN;  
        int currentSum = 0;    

        //单数组 动态规划
        //对于单向前进的的数组而言，可以通过
        //currentSum = max(nums[i], currentSum + nums[i]); 
        //来获取当前数组的最大值
        for (int i = 0; i < n; i++) {
            currentSum = max(nums[i], currentSum + nums[i]);  
            maxVal = max(maxVal, currentSum);  
        }

        return maxVal;
    }
};
