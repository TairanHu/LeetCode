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
            return head;
        }
        
        ListNode* list = head;
        ListNode* Node_tmp = head;
        ListNode* result = Node_tmp;
        
        int data = head->val;
        int data_tmp = head->val;
        bool flag = 0;
        
        while(list->next != NULL)
        {
            list = list->next;
            data_tmp = list->val;
            while(data_tmp == data)
            {
                if(list->next != NULL)
                {
                    list = list->next;
                    data_tmp = list->val;
                }
                else
                {
                    flag = 1;
                    break;
                }
                
            }
            if(flag == 0)
            {
                data = data_tmp;
                Node_tmp->next = list;
                Node_tmp = Node_tmp->next;
            }
            else
            {
                Node_tmp->next = NULL;
            }
            
        }
        return result;        
    }
};




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
            return head;
        }
        
        ListNode* list = head;
        ListNode* result = list;
        
        while(list->next != NULL)
        {
            if(list->val == list->next->val)
            {
                list->next = list->next->next;
            }
            else
            {
                list = list->next;
            }
            
        }
        return result;        
    }
};