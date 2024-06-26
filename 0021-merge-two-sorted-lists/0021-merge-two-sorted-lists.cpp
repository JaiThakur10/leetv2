/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode * dummy = new ListNode();
        ListNode * tail = dummy;
        while(l1 != NULL && l2 != NULL){
            if(l1 -> val < l2 -> val){
                tail-> next = l1;
                l1 = l1->next;
                tail = tail->next;
            }
            else{
                tail-> next = l2;
                l2 = l2->next ;
                tail = tail->next;

            }
        }
        if(l2 == NULL){
            tail -> next = l1;
        }
        if(l1 == NULL){
            tail -> next = l2;
        }
        return dummy->next;
    }
};