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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL)
        {
            return NULL;
        }
        
        ListNode* Node_last = new ListNode(0);
        Node_last->next = head;
        ListNode* list = Node_last->next;
        ListNode* result = Node_last;
        
        
        while(list != NULL && list->next != NULL)
        {
            if(list->val == list->next->val)
            {
                int val = list->val;
                while(list->next->next)
                {
                    if(list->next->next->val != val)
                    {
                        break;
                    }
                    list = list->next;
                }
                
                Node_last->next = list->next->next;
                
                list = list->next->next;
            }
            else
            {
                Node_last = list;
                list = list->next;
                //Node_last = list;
            }
        }
        
        
        result = result->next;
        return result;
    }
};