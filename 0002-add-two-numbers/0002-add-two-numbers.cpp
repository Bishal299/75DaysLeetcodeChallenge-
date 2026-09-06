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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dhead=new ListNode(0) ;
        ListNode* tail =dhead;
        int carry=0;
        while(l1 !=NULL || l2!=NULL || carry!=0 ){
           int dig1=(l1!=NULL) ? l1->val:0;
           int dig2=(l2!=NULL) ? l2->val:0;

           int sum=dig1+dig2+carry;
           int dig=sum%10;
           carry=sum/10;
           
           ListNode* newnode=new ListNode(dig);
           tail->next=newnode;
           tail=tail->next;

           if(l1!=NULL){
            l1=l1->next;
           }
           if(l2!=NULL){
            l2=l2->next;
           }

        }

        ListNode* result=dhead->next;
        delete dhead;
        return result;
    }
};