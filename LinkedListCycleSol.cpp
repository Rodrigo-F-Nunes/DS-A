class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *curr = head;
        ListNode *aft = head;

        if(head == NULL){
            return false;
        }

        while (aft -> next != nullptr){
            aft = aft -> next;
            if(aft == NULL || aft->next == NULL){
                return false;
            }
            aft = aft -> next;
            curr = curr -> next;

            if(aft == curr){
                return true;
            }
        }
        return false;
    }
};
