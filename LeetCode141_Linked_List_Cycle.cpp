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
    bool hasCycle(ListNode *head) {
        
        ListNode *low = head;
        ListNode *fast = head;
        
        if(head == NULL || head->next == NULL)
        {
            return false;
        }
        
        while(low != NULL && fast != NULL)
        {
            low = low->next;
            
            if(fast->next == NULL)
            {
                return false;
            }
            fast = fast->next->next;
            
            if(low == fast)
            {
                return true;
            }            
        }
        
        return false;
        
    }
};