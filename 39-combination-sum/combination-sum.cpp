class Solution {
public:

    void combinations(vector<int> candidates, vector<vector<int>>& ans,vector<int> currComb ,int target, int start , int currSum  ){

        if(currSum > target) return;

        if(currSum == target){
            ans.push_back(currComb);
            return;
        }

        for(int i = start; i < candidates.size(); i ++) {

            currComb.push_back(candidates[i]);

            currSum += candidates[i];
            combinations(candidates,ans,currComb, target, i ,currSum);
            currComb.pop_back();
            currSum -= candidates[i];
            
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;

        vector<int> currComb;

        combinations(candidates,ans,currComb, target, 0 ,0);

        return ans; 
        
    }
};