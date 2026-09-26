/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode* temp=NULL;
public:
    void helper(TreeNode* s){
        if(s==NULL){
            return ;
        }
        
        TreeNode* l=s->left;
        TreeNode* r=s->right;

        if(temp!=NULL){
            temp->right=s;
        }

        s->left=NULL;
        temp=s;
        helper(l);
        helper(r);
    }

    void flatten(TreeNode* root) {
        
        helper(root);
    }
};