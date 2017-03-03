/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        
        int size = 0;
        ListNode* node = head;
        
        while(node != NULL)
        {
            node = node->next;
            size++;
        }
        
        return get_Node(head, size);
        
    }
    
    TreeNode* get_Node(ListNode* &head, int size)
    {
        if(size == 0)
        {
            return NULL;
        }
        
        TreeNode* root = new TreeNode(0);
        
        root->left = get_Node(head, size/2);
        root->val = head->val;
        head = head->next;
        root->right = get_Node(head, size-size/2-1);
        
        return root;
        
    }
    
};