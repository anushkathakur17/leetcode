// Last updated: 5/23/2026, 12:12:58 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m=nums.size()/2;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;

            if(freq[num]>m){
                return num;
            }
        }
        return -1;
    }
};