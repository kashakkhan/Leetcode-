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
        ListNode* temp=head;
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        int middle=count/2;
        for(int i = 0;i<middle-1;i++) {
            temp=temp->next;
        }
        ListNode* save=temp->next;
        temp->next=save->next;
        delete save;
        

    
    return head;}
};