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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        
        while(head!=NULL && head->val==val) {
            head=head->next;
        }
        if(head==NULL) {
            return NULL;
        }
        temp=head;
        while(temp->next!=NULL){
            ListNode* save=temp->next;
            if(temp->next->val==val) {
                temp->next=save->next;
               
               
                delete save;
            }
            else {
                temp=temp->next;
            }
            
        }
        return head;
        
    }
};