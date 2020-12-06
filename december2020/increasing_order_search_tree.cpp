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
    void inorder(TreeNode* root, vector<int> &nodevals) {
        if(!root) return;
        inorder(root->left , nodevals);
        nodevals.push_back(root->val);
        inorder(root->right,nodevals);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> nodevals;
        inorder(root,nodevals);
        TreeNode* ans = new TreeNode(0);
        TreeNode* curr = ans;
        for(int v : nodevals) {
            TreeNode* p = new TreeNode(v);
            curr->right = p;
            curr = curr->right;
        }
        return ans->right;
    }
};
