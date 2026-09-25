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
        if(temp==NULL) {
            return NULL;
        }
        while(temp->next!=NULL) {
            if (temp->next->val==val) {
                ListNode* a = temp->next;
                temp->next=temp->next->next;
                delete a ;
            }
            else {
                temp=temp->next;
            }
        }
        return head;       
    }
};