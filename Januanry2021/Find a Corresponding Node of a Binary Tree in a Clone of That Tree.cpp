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
    TreeNode* ans=NULL;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned) {
          s;     if(original == target) 
                   ans = cloned; //answer must be a reference to a node in the cloned tree.
            getTargetCopy(original->left,cloned->left,target);
            getTargetCopy(original->right,cloned->right,target);
        }
        return an
    }
};
