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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*temp=head;
        if(head==NULL || head->next == NULL) {
            return head;
        }
        int count=0;
        while(temp!=NULL) {
            temp=temp->next;
            count++;
        }

        k=k%count;
        if(k==0){
            return head;
         }                             
         count=count-k;
        temp=head;
        for(int i =0;i<count-1;i++) {
            temp=temp->next;
        }
        ListNode* curr=temp->next;
        ListNode *head1=curr;
        while(curr->next!=NULL) {
            curr=curr->next;
        }
        ListNode* save=curr;
        temp->next=NULL;
        save->next=head;
        
        return head1;
    }
};