class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == nullptr) {
            return head;
        }

        ListNode *curr = head;
        ListNode *prev;

        while(curr != nullptr && curr->next != nullptr){
            if(curr->val == curr -> next ->val){
                prev = curr -> next;
                curr -> next = prev -> next;
            }
            else {
                curr = curr->next;
            }
        }
        return head;
    }
};