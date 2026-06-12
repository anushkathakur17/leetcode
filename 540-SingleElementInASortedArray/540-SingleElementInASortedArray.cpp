// Last updated: 6/12/2026, 10:31:02 PM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid]==nums[mid^1]){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return nums[low];
    }
};