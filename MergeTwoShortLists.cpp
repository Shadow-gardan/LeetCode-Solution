class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp =new ListNode(0);
        ListNode* addr =temp;

        while(list1 !=NULL && list2 !=NULL){
            if(list1->val <= list2->val){
                addr->next = list1;
                list1 = list1->next;
            }
            else{
                addr->next =list2;
                list2 = list2->next;
            }
            addr = addr->next;
        }

        if(list1 != NULL) addr->next =list1;
        if(list2 != NULL) addr->next =list2;

        return temp->next;
    }
};