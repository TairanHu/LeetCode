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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
        {
            return true;
        }
        return is_mirror(root->left, root->right);
    }

    bool is_mirror(TreeNode* left, TreeNode* right)
    {
        if(left == NULL && right == NULL)
        {
            return true;
        }
        else if(left == NULL || right == NULL)
        {
            return false;
        }

        if(left->val != right->val)
        {
            return false;
        }
        else
        {
            return is_mirror(left->left, right->right) && is_mirror(left->right, right->left);
        }

    }

};
