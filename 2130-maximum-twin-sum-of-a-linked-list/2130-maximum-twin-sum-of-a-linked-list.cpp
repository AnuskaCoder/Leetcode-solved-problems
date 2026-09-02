class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        if(!head || !head->next)return head;

        ListNode* newHead=reverse(head->next);

        head->next->next=head;
        head->next=NULL;

        return newHead;
    }

    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        slow=reverse(slow);
        fast=head;

        int twinSum=INT_MIN;
        while(slow&&fast)
        {
            twinSum=max(twinSum,slow->val+fast->val);
            slow=slow->next;
            fast=fast->next;
        }

        return twinSum;
    }
};