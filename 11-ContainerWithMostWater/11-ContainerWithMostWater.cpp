// Last updated: 6/1/2026, 10:20:37 AM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int left=0;
        int right=height.size()-1;

        while(left<right){
            maxArea=max(maxArea,(right-left)*min(height[left],height[right]));

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};