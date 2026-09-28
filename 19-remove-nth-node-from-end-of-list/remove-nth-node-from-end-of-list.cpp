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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=head;
        if(head==NULL || head->next==NULL) {
            return NULL;
        }
        int count=0;
        while(temp!=NULL) {
            count++;
            temp=temp->next;
        }
        if(n==count) {
            return head->next;
        }
        count=count-n;

        temp=head;
        for(int i =0;i<count-1;i++){
            temp=temp->next;
        }
        ListNode* save=temp->next;
        temp->next=save->next;
        delete save ; 
        return head;





        
    }
};