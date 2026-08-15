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
   int  sum(TreeNode* root,int result){
     
        if(root==NULL){
            return 0;
        }
        result=result*10+root->val;
        if(root->left==NULL && root->right==NULL){
            return result;
        }
      int lsum= sum(root->left,result);
       int rsum=sum(root->right,result);
       return lsum+rsum; 
   }
    
    int sumNumbers(TreeNode* root) {
    //    int sum=0;
        if(root==NULL){
            return 0;
        }
       
       return sum(root,0);

    }
};