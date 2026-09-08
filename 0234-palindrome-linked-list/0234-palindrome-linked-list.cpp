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
    bool isPalindrome(ListNode* head) {
        vector<int>ls;
        ListNode* temp= head;
        while(temp!=NULL){
            ls.push_back(temp->val);
            temp=temp->next;
        }
        int n=ls.size();
        for(int i=0;i<n;i++){
            if(ls[i]!=ls[n-i-1]){
                return false;
            }
        }
        return true;
    }
};