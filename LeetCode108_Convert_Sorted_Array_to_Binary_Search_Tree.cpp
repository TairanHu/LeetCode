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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return BST_tree(nums, 0, nums.size()-1);
        
    }
    
    TreeNode* BST_tree(vector<int>& nums, int start, int end)
    {
        if(start > end)
        {
            return NULL;
        }
        
        if(start == end)
        {
            return new TreeNode(nums[start]);
        }
        
        int mid = (start+end)/2;
        
        TreeNode *Node = new TreeNode(nums[mid]);
        
        Node->left = BST_tree(nums, start, mid-1);
        Node->right = BST_tree(nums, mid+1, end);
        
        return Node;
        
    }
    
};