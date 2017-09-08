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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL || root== p || root == q)
            return root;
        
        TreeNode* node_left = lowestCommonAncestor(root->left, p, q);
        TreeNode* node_right = lowestCommonAncestor(root->right, p, q);
        
        if(node_left && node_right)
            return root;
        
        return node_left == NULL ? node_right : node_left;
        
    }
    
};