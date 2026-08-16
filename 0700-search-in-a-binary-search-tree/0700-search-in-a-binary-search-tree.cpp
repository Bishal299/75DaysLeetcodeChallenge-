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
public:
    TreeNode* searchhelper(TreeNode* root, int val){
        if(root==NULL){
            return NULL;
        }
        if(root->val==val){
            return root;
        }
        if(root->val>val){
           return  searchhelper(root->left,val);
        }else{
            return searchhelper(root->right,val);
        }
        //return root;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        // if(root)

        TreeNode* ans=searchhelper(root,val);
        return ans;
    }
};