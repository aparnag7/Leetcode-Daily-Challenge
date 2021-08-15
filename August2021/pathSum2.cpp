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
    
    void backtrack(TreeNode* root,int &target , int currsum , vector<int>&curr ,  vector<vector<int>> &result) {
        if(!root)
            return; 
        currsum += root->val;
        curr.push_back(root->val);
        if(!root->left && !root->right && currsum == target) {           
                result.push_back(curr);                
        }
        backtrack(root->left , target , currsum , curr, result);
        backtrack(root->right , target , currsum , curr, result);
        curr.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        vector<vector<int>> result;
        vector<int> curr;
        int currsum = 0;
        backtrack(root,target,currsum,curr,result);
        return result;        
    }
};
