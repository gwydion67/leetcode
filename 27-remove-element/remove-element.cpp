class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int temp;

        for (int i = 0; i < n;) {
            if (val == nums[n - 1]) {
                n--;
                continue;
            }
            if (nums[i] == val) {

                temp = nums[n - 1];
                nums[n - 1] = nums[i];
                nums[i] = temp;
                // if(nums[i] == nums[n-1]){i--;}
                n--;
            }
            i++;
        }
        return n;
    }
};