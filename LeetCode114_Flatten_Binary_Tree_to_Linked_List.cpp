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
    void flatten(TreeNode* root) {
        
        TreeNode* res = fla_tree(root);
        
    }
    
    TreeNode* fla_tree(TreeNode* Node)
    {
        if(Node == NULL)
        {
            return NULL;
        }
        
        TreeNode* left_Node = fla_tree(Node->left);
        TreeNode* right_Node = fla_tree(Node->right);
        
        if(Node->left != NULL)
        {
            TreeNode *tmp = Node->right;
            Node->right = Node->left;
            Node->left = NULL;
            left_Node->right = tmp;
        }
        
        if(right_Node != NULL)
        {
            return right_Node;
        }
        if(left_Node != NULL)
        {
            return left_Node;
        }
        
        return Node;
        
    }
    
};