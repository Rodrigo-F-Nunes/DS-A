class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head){return head;}
        std::vector<int> useForSort;
        ListNode *sortedLL = new ListNode;
        ListNode *newHead = sortedLL;
        while(head != nullptr){
            useForSort.push_back(head -> val);
            head = head -> next;
        }
        sort(useForSort.begin(), useForSort.end());
        for(int i = 0; i < useForSort.size(); i++){
            sortedLL -> val = useForSort[i];
            if(i < useForSort.size() - 1){
            sortedLL -> next = new ListNode;
            sortedLL = sortedLL -> next;}
        }
        return newHead;
    }
};