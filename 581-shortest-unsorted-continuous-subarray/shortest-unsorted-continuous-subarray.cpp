class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        // if(end == start) {cout<<"wtf" ; return 0;}
        // int flag1 = 0, flag2 = 0;
        // while(start < end && !(flag1 && flag2)){
        //     if(nums[start] > nums[start + 1]){flag1 = 1;} else {start++;}
        //     if(nums[end] < nums[end-1] ){ flag2 = 1;} else {end--;}
        // }

        // if(flag1 || flag2){
        //     cout<<"well";
        //     return end-start + 1;
        // }else {
        //     cout<<"not well";
        //     return start - end;
        // }



        if(end == start) {cout<<"wtf" ; return 0;}
        
        vector<int>sortedVec(nums);

        sort(sortedVec.begin(), sortedVec.end());

        // idea : to sort the array and return the difference between first and last not matching term

        while(nums [ start ] == sortedVec[ start ] && start < end) {start ++;}
        while(nums[end] == sortedVec[end] && end > start ) { end --;}
        return end == start ? 0 : end - start + 1;
    }
};