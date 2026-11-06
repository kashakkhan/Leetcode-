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
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL) {
            count++;
            temp=temp->next;
        }
        if(head==NULL) {
            return head;
        }
        temp=head;
        if(count==n) {
            head=head->next;
            return head;
        }
        temp=head;
        count=count-n;
        for(int i =0;i<count-1;i++) {
            temp=temp->next;
        }
        ListNode* save=temp->next;
        temp->next=save->next;
    
        delete save;
        
     
    
return head;}
};