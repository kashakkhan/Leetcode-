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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=0;
        ListNode* temp1=l1;
        ListNode*temp2=l2;
        ListNode* newnode=new ListNode(0);
        newnode->next=NULL;
        ListNode* a=newnode;
        while(temp1!=NULL || temp2!=NULL) {
            int sum=carry;
            if(temp1!=NULL) {
                sum=sum+temp1->val;
                temp1=temp1->next;

            }
            if(temp2!=NULL) {
                sum=sum+temp2->val;
                temp2=temp2->next;
            }
            carry=sum/10;
            int digit1=sum%10;
            ListNode* digit=new ListNode(digit1);
            a->next=digit;
            a=a->next;
            
        }
        if(carry!=0) {
            ListNode* carry1=new ListNode(carry);
            a->next=carry1;
            a=a->next;
        }
        return newnode->next;
    }
};