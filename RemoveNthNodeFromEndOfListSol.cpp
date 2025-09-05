class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n){
        if(head == NULL){
            return head;
        }
        int listSize = 0;
        ListNode *newList = new ListNode(0);
        newList -> next = head;
        ListNode *curr = head;
        ListNode *toDelete;
        while(curr != nullptr){
            curr = curr -> next;
            listSize++;
        }
        int listDiff = listSize - n;
        toDelete = newList;
        for(int i=0; i < listDiff; i++){
            toDelete = toDelete -> next;
        }
        toDelete -> next = toDelete -> next -> next;
        return newList -> next;
    }
};