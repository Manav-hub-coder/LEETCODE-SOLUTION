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
    void deleteNode(ListNode* node) {
        ListNode*nextn=node->next;
        node->val=nextn->val;
        node->next=nextn->next;
        nextn->next=NULL;
        delete(nextn);
    }
};