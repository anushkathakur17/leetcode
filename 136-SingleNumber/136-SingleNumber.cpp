// Last updated: 5/23/2026, 12:23:41 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int num : nums) {
            ans ^= num;
        }

        return ans;
    }
};