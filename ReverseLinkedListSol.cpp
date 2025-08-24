class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr = head;
        ListNode *prev;
        ListNode *aft;
        if(head == nullptr){
            return head;
        }
        while(curr != nullptr){
           aft = curr -> next;
           curr -> next = prev;
           prev = curr;
           curr = aft;
        }
     return prev;
    }
};