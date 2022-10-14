/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
            return NULL;
        int count=0;
        ListNode*n1=head,*n2=head;
        while(n1!=NULL)
        {
            count++;
            n1=n1->next;
        }
        int middle=count/2;
        for(int i=0;i<middle-1;i++)
             n2=n2->next;
        n2->next=n2->next->next;
        return head;
    }
};