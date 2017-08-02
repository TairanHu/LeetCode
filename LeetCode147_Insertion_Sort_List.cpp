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
    ListNode* insertionSortList(ListNode* head) {
        
        if(head == NULL)
        {
            return NULL;
        }
        
        ListNode* first = head;
        ListNode* node1 = head;
        ListNode* node2 = head;
        ListNode* tail = node2->next;
        
        while(tail != NULL)
        {
            while(first->val < tail->val)
            {
                node1 = first;
                first = first->next;
            }

            if(first == tail)
            {
                first = head;
                node1 = head;
                node2 = node2->next;
                tail = node2->next;
                cout << "hehe" << endl;
                continue;
            }
            
            if(first == head)
            {
                
                node2->next = tail->next;
                tail->next = head;
                head = tail;
                tail = node2->next;
                cout << "haha" << endl;
                first = head;
                node1 = head;
                continue;
            }
            
            cout << node1->val << first->val <<node2->val << tail->val << endl;
            node1->next = tail;
            node2->next = tail->next;
            tail->next = first;
            
            tail = node2->next;
            first = head;
            node1 = head;
            
        }
        
        return head;
        
        
        
    }
};