// Last updated: 5/28/2026, 1:32:03 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;

            if(fast==slow){
                return true;
            }
        }
        return false;
    }
};