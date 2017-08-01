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
    void reorderList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
        {
            return;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;            
        }
        
        fast = slow->next;
        slow->next = NULL;
        
        ListNode *dummy = new ListNode(0);
        while(fast) 
        {
            ListNode* n = dummy->next;
            dummy->next = fast;
            ListNode* nn = fast->next;
            fast->next = n;
            fast = nn;
        }
        
        slow = head;
        fast = dummy->next;

        while(slow) 
        {
            if(fast != NULL) 
            {
                ListNode* n = slow->next;
                slow->next = fast;
                ListNode* nn = fast->next;
                fast->next = n;
                fast = nn;
                slow = n;
            } 
            else 
            {
                break;
            }
        }
        
    }
};