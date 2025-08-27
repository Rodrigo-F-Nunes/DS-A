class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *middle = head;
        int counter = 0;
        while(head->next != nullptr){
         counter++;
         head = head -> next;
        }
        if(counter % 2 == 1){
            counter++;
        }
        for(int i = 0; i < counter/2; i++){
            middle = middle -> next;
        }
        return middle;
    }
};