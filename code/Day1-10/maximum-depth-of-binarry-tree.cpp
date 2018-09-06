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
    int maxDepth(TreeNode* root) {
        int height=maxHeight(root);
        
        return height;
    }
   
    int maxHeight(TreeNode* root){
        if(root==NULL)
            return 0;
        else{
        int l=maxHeight(root->left);
        int r=maxHeight(root->right);
                return (l>r)?l+1:r+1;

        }
    }
};
