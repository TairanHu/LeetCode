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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == NULL || headB == NULL)
            return NULL;
        
        ListNode *A = headA;
        ListNode *B = headB;
        int lenA = 1;
        int lenB = 1;
        int sub = 0;
        
        while(A->next != NULL)
        {
            lenA++;
            A = A->next;
        }
        while(B->next != NULL)
        {
            lenB++;
            B = B->next;
        }
        
        if(B != A)
            return NULL;
        
        A = headA;
        B = headB;
        
        sub = lenA - lenB;
        if(sub > 0)
        {
            while(sub--)
            {
                A = A->next;
            }
        }
        else if(sub < 0)
        {
            while(sub++)
            {
                B = B->next;
            }
        }
        
        while(A->next != NULL)
        {
            if(A == B)
            {
                return A;
            }
            A = A->next;
            B = B->next;
        }
        return A;
        
    }
};