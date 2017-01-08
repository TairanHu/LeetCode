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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        
        Get_inorderTraversal(root, result);
        
        return result;
    }
    
    void Get_inorderTraversal(TreeNode* Node, vector<int>& result)
    {
        if(Node == NULL)
        {
            return;
        }
        Get_inorderTraversal(Node->left, result);
        result.push_back(Node->val);
        Get_inorderTraversal(Node->right, result);
    }
    
};