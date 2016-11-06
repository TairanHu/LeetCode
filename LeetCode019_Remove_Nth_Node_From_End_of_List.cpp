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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* Node = head;
        int num = 0;
        while(Node != NULL)
        {
            Node = Node->next;
            num++;
        }
        
        int t = num-n;
        
        if(t == 0)
        {
            return head->next;
        }
        
        Node = head;
        while(--t)
        {
            Node = Node->next;
        }
        if(Node->next == NULL)
        {
            Node = NULL;
        }
        else
        {
            Node->next = Node->next->next;
            //delete Node;
        }
        
        return head;
        
    }
};