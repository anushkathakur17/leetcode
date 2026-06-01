// Last updated: 6/1/2026, 10:20:31 AM
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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head, *fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        if(!(fast && fast->next)) return NULL;
        while(head!=slow){
            head=head->next;
            slow=slow->next;
        }
        return head;
    }
};