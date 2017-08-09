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
    ListNode* removeElements(ListNode* head, int val) {
        
        
        
        ListNode* res = head;
        ListNode* last = head;
        
        while(head != NULL && head->val == val)
        {
            head = head->next;
            res = head;
        }
        
        if(head == NULL)
            return head;
        
        last = res;
        head = head->next;
        
        while(head != NULL)
        {
            if(head->val == val)
            {
                last->next = head->next;
            }
            else
            {
                last = last->next;
            }
            head = head->next;
        }
        
        return res;
        
    }
};