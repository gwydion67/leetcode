class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadane's algorithm
        int maxSum = INT_MIN;
        int currSum = 0;

        for(int i : nums){
            currSum += i;
            if(currSum > maxSum){
                maxSum = currSum;
            }
            if(currSum < 0){
                currSum = 0;
            }
        }

        return maxSum;
    }
};