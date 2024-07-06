class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;

        int max = 0;

        while(left < right ) {
            
            if(height[left] < height[right]) {
                if((right - left)*height[left] > max){
                    max = (right-left)*height[left];
                }
                left++;
            }else{
                if((right - left)*height[right] > max){
                    max = (right-left)*height[right];
                }
                right--;
            }
        }

        return max;
    }
};