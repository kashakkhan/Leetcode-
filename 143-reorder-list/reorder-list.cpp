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
    void reorderList(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        if(head==NULL || head->next==NULL) {
            return ;
        }
        while(temp!=NULL) {
            count++;
            temp=temp->next;
        }
        temp=head;
        int middle=count/2;
        for(int i =0;i<middle;i++) {
            
            temp=temp->next;
        }
        ListNode*save = temp->next;
        temp->next=NULL;
        ListNode* a =save;
        temp=head;

        ListNode* prev=NULL;
        while(a!=NULL){
            ListNode* curr=a->next;
            a->next=prev;
            prev=a;
            a=curr;
        }
        save=prev;
        while(temp!=NULL && save!=NULL){
            ListNode* l1=temp->next;
            ListNode* l2=save->next;

            temp->next=save;
            save->next=l1;

            temp=l1;
            save=l2;
        }
        return ;

        
    }
};