// Last updated: 7/1/2026, 11:42:08 AM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int maxLen=0;

        unordered_set<char> st;

        for(int right=0;right<s.size();right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);

            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
};