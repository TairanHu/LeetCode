/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* Less_head = new ListNode(0);
        ListNode* Great_head = new ListNode(0);
        
        ListNode* tmp_node = head;
        ListNode* less = Less_head;
        ListNode* great = Great_head;
        
        while(tmp_node != NULL)
        {
            if(tmp_node->val < x)
            {
                less->next = tmp_node;
                less = less->next;
            }
            else
            {
                great->next = tmp_node;
                great = great->next;
            }
            tmp_node = tmp_node->next;
        }
        less->next = Great_head->next;
        great->next = NULL;
        return Less_head->next;
    }
};