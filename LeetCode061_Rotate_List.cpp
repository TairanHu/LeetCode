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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* Node = head;
        ListNode* Node_result = head;
        
        if(head == NULL)
        {
            return Node_result;
        }
        
        int count = 1;
        
        while(Node->next != NULL)
        {
            Node = Node->next;
            count++;
        }
        
        Node->next = head;
        
        k = k%count;
        count = count - k;
        while(count--)
        {
            Node = Node->next;
        }
        Node_result = Node->next;
        Node->next = NULL;
        
        return Node_result;
        
    }
};