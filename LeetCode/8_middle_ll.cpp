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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        count=count/2;
        temp=head;
        for(int i=0;i<count;i++)
        {
            temp=temp->next;
        }
        return temp;
    }
};