class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head){return head;}
        ListNode *curr = head;
        int originalListSize = 1;
        while(curr -> next != nullptr){
            curr = curr -> next;
            originalListSize+=1;
        }
        curr -> next = head;
        k = k % originalListSize;
        int rotation = originalListSize -k;
        ListNode* newTail = head;
        for (int i = 1; i < rotation; i++) {
            newTail = newTail -> next;
        }
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        return newHead;
    }
};
