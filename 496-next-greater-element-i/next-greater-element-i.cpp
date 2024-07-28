using namespace std;

class Solution {
    
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;
        
        cout<<"program starting\n"; 
        for(int i = 0,check = 0; i < nums1.size() ; i++ ){
            check = 0;
            int index = 0;
            cout<<"entering "<<i<<"\n";
            for(int j = 0; j < nums2.size(); j++ ){
                if(nums1[i] == nums2[j] && check == 0 ){
                    index = i;
                    check = 1;
                }
                if(check == 1 ){
                    if(nums1[i] < nums2[j] ){
                        check = 2;
                        ans.push_back(nums2[j]);
                        break;
                    }
                }
                
            }
            cout<<"the check is " <<check<<"\n";
            if(check != 2) {
              ans.push_back(-1);  
            }

        }

        return ans;
        
    }
};