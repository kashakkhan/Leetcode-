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
        stack<int> s1,s2;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int sum=0;
        while(temp1!=NULL) {
            s1.push(temp1->val);
            temp1=temp1->next;
        }
        temp1=l1;
        while(temp2!=NULL) {
            s2.push(temp2->val);
            temp2=temp2->next;
        }
        temp2=l2;
        int carry=0;
        ListNode* temp=NULL;
        ListNode* temp3=temp;
        while(!s1.empty() || !s2.empty()|| carry ){
            int sum=carry;
            if(!s1.empty()) {
                sum=sum+s1.top();
                s1.pop();
            }
            if(!s2.empty()) {
                sum=sum+s2.top();
                s2.pop();
            }
            carry=sum/10;
            int digit=sum%10;
            ListNode* newnode=new ListNode(digit);
            newnode->next=temp3;
            temp3=newnode;
        }
        return temp3;

    }
};