/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *l3,*head;
        head=l3;
        if(l1==NULL && l2!=NULL){
            l3 = new ListNode(l2->val);
            l2=l2->next;
        }
        else if(l2==NULL && l1 != NULL){
            l3= new ListNode(l1->val);
            l1=l1->next;
        } 
        else if(l1!=NULL && l2!=NULL){
            //cout<<"yo0";
            l3= l1->val<l2->val?new ListNode(l1->val):new ListNode(l2->val);
            l1->val<l2->val?l1=l1->next:l2=l2->next;
        }
        head=l3;
        while(l1!=NULL && l2!=NULL){
            if(l1->val<l2->val){
                l3->next= new ListNode(l1->val);
                l1=l1->next;}
            else{
                l3->next=new ListNode(l2->val);
                l2=l2->next;}
            l3=l3->next;
        }
        while(l2!=NULL){
            l3->next =new ListNode(l2->val);
            l2=l2->next; l3 = l3 -> next ;
        }
        while(l1!=NULL){
            l3->next =new ListNode(l1->val);
            l1=l1->next; l3 = l3 -> next ;
        }
        return head;
    }
};