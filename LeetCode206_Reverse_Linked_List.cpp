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
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
            
        
        ListNode* node = new ListNode(0);
        node->next = head;
        ListNode* first_node = head;
        
        while(head->next != NULL && head->next->next != NULL)
        {
            first_node = node->next;
            node->next = head->next;
            head->next = head->next->next;
            node->next->next = first_node;
        }
        first_node = node->next;
        node->next = head->next;
        head->next = NULL;
        node->next->next = first_node;
        
        return node->next;
    }
};