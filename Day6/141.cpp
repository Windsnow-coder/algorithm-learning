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
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while((fast!=nullptr)&&(fast->next!=nullptr))
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
        }
        return false;//使用快慢指针可以降低空间复杂度
        
        
        
        
        
        /*unordered_set<ListNode*>s;
        ListNode* cur=head;
        while(cur!=nullptr)
        {
            if(s.count(cur))
            {
                return true;
            }
            else
            {
                s.insert(cur);
                cur=cur->next;
            }
        }
        return false;*/
    }
};