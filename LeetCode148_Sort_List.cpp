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
    ListNode* sortList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        fast = slow->next;
        slow->next = NULL;
        
        ListNode* p1 = sortList(head);
        ListNode* p2 = sortList(fast);
        
        return merge(p1, p2);       
        
    }
    
    ListNode* merge(ListNode* p1, ListNode* p2)
    {
        if(p1 == NULL)
        {
            return p2;
        }
        else if(p2 == NULL)
        {
            return p1;
        }
        else if(p1 == NULL && p2 == NULL)
        {
            return NULL;
        }
        
        ListNode* start = new ListNode(0);
        ListNode* p = start;
        
        while(p1 && p2)
        {
            if(p1->val < p2->val)
            {
                p->next = p1;
                p1 = p1->next;
            }
            else
            {
                p->next = p2;
                p2 = p2->next;
            }
            p = p->next;
        }
        
        if(p1)
        {
            p->next = p1;
        }
        else if(p2)
        {
            p->next = p2;
        }
        
        return start->next;       
        
    }
    
};