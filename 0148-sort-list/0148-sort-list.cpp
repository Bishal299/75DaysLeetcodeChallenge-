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
    ListNode* merge(ListNode* l,ListNode* r){
        ListNode* ptr=new ListNode(0);
        ListNode* curr=ptr;
        while(l!=NULL && r!= NULL){
            if(l->val<=r->val){
               curr->next=l;
               l=l->next;
            }
            else{
                curr->next=r;
               r=r->next;
            }
            curr=curr->next;
        }

        if(l!=NULL){
            curr->next=l;
            l=l->next;
        }
        if(r!=NULL){
            curr->next=r;
            r=r->next;
        }
        return ptr->next;
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next ==NULL){
            return head;
        }
        ListNode* temp=NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast !=NULL && fast->next!=NULL){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
       temp->next=NULL;

        ListNode* l=sortList(head);
        ListNode* r=sortList(slow);

        return merge(l,r);


    }
};