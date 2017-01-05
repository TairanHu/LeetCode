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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        vector<int> tmp;
        
        ListNode* tmp_first = head;
        ListNode* tmp_second = head;
        
        m = m-1;
        n = n-1;
        int dis = n-m+1;
        
        while(m--)
        {
            tmp_first = tmp_first->next;
            tmp_second = tmp_second->next;
            n--;
        }
        
        //int data = tmp_first->val;
        tmp.push_back(tmp_first->val);
        
        while(n--)
        {
            tmp_second = tmp_second->next;
            tmp.push_back(tmp_second->val);
        }
        tmp.push_back(tmp_second->val);
        
        while(dis--)
        {
            tmp_first->val = tmp[dis];
            tmp_first = tmp_first->next;
        }
        
        
        return head;
    }
};