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
    bool isPalindrome(ListNode* head) {
        
        if (!head || !head->next) return true;
        
        ListNode *slow = head, *fast = head;
        stack<int> s;
        
        s.push(head->val);
        
        while (fast->next && fast->next->next) 
        {
            slow = slow->next;
            fast = fast->next->next;
            s.push(slow->val);
        }
        
        if (!fast->next) s.pop();
        while (slow->next) 
        {
            slow = slow->next;
            int tmp = s.top(); s.pop();
            if (tmp != slow->val) return false;
        }
        return true;
        
    }
};