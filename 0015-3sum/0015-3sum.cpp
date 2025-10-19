class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> ans_set;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++){
            int j = i + 1;
            int k = n-1;
            while(j < k){
                int sum = nums[i] + nums[j] +nums[k];

                if(sum > 0){
                    k--;
                }else if(sum < 0){
                    j++;
                }
                else{
                    vector<int> temp = {nums[i] , nums[j] , nums[k]};
                    ans_set.insert(temp);
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1] ) j++; 
                    while(j < k && nums[k] == nums[k+1] ) k--; 
                }
            }
        }
        vector<vector<int>> ans;

        for (auto a: ans_set){
            ans.push_back(a);
        }
        return ans;
    }
};