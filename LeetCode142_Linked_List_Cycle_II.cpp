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
    ListNode *detectCycle(ListNode *head) {

        //ListNode *res;
        ListNode *low = head;
        ListNode *fast = head;

        while(low != NULL && fast != NULL)
        {
            low = low->next;
            fast = fast->next;

            if(fast != NULL)
            {
                fast = fast->next;
            }

            if(low == fast)
            {
                break;
            }

        }

        if(fast == NULL)
        {
            return NULL;
        }

        low = head;
        while(low != fast)
        {
            low = low->next;
            fast = fast->next;
        }

        return fast;
    }
};
