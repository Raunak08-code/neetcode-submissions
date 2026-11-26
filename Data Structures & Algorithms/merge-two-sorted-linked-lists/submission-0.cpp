class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a = list1;
        ListNode* b = list2;

        ListNode* dummy = new ListNode(-1);
        ListNode* td = dummy;

        while(a && b){
            if(a->val <= b->val){
                td->next = new ListNode(a->val);
                a = a->next;
            }
            else{
                td->next = new ListNode(b->val);
                b = b->next;
            }
            td = td->next;
        }
        if(!a) td->next = b;
        else td->next =a;
        return dummy->next;
    }
};
