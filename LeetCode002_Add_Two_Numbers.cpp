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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        if(l1 == NULL && l2 ==NULL)
        {
            return l1;
        }

        int sum = l1->val+l2->val;
        bool flag = 0;
        if(sum >= 10)
        {
            sum = sum%10;
            flag = 1;
        }
        ListNode* list = new ListNode(sum);
        ListNode* list1 = list;

        l1 = l1->next;
        l2 = l2->next;

        while(l1 != NULL && l2 !=NULL)
        {
            sum = l1->val+l2->val;

            if(flag)
            {
                sum += 1;
                flag = 0;
            }

            if(sum >= 10)
            {
                sum = sum%10;
                flag = 1;
            }

            list->next = new ListNode(sum);
            list = list->next;
            l1 = l1->next;
            l2 = l2->next;
        }


        //解决两个链表长度不一样
        while(l1 != NULL)
        {
            sum = l1->val;

            if(flag)
            {
                sum += 1;
                flag = 0;
            }

            if(sum >= 10)
            {
                sum = sum%10;
                flag = 1;
            }

            list->next = new ListNode(sum);
            list = list->next;
            l1 = l1->next;

        }
        while(l2 != NULL)
        {
            sum = l2->val;

            if(flag)
            {
                sum += 1;
                flag = 0;
            }

            if(sum >= 10)
            {
                sum = sum%10;
                flag = 1;
            }

            list->next = new ListNode(sum);
            list = list->next;
            l2 = l2->next;
        }

        if(flag)
        {
            sum = 1;
            list->next = new ListNode(sum);
        }

        return list1;

    }
};
