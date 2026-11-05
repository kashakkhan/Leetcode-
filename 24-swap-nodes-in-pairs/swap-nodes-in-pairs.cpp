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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL ||head->next==NULL) {
            return head;            
        }
        ListNode* temp=head;
        ListNode* newhead=head->next;
        ListNode*prev=NULL;
        while(temp!=NULL && temp->next!=NULL){
            ListNode* curr=temp->next;
            ListNode* save=curr->next;

            curr->next=temp;
            temp->next=save;
            if(prev!=NULL) {
                prev->next=curr;
            }
            prev=temp;
            temp=save;


        }
        return newhead;}

        

        
 
};