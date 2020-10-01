/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    
public:
    int sumOfLeftLeaves(TreeNode* root, int c=0) {
        if(root==NULL)
            return 0;
        if(c==1 && root->left==NULL && root->right==NULL)
            return root->val;
        int left = sumOfLeftLeaves(root->left,1);
        int right = sumOfLeftLeaves(root->right,0);
        return left + right;
    }
};