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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode* Node = head;
        ListNode* tmp_pre = new ListNode(0);
        tmp_pre->next = head;
        
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        
        head = Node->next;
        while(Node && Node->next)
        {
            //需要记录前驱结点
            tmp_pre->next = Node->next;
            
            Node->next = Node->next->next;
            
            tmp_pre->next->next = Node;
            
            tmp_pre = Node;
            Node = Node->next;
        }
        
        return head;
        
    }
};