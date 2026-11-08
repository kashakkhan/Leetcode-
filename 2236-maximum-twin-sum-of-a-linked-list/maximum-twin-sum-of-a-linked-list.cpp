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
    int pairSum(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL) {
            count++;
            temp=temp->next;
        }
        int middle=count/2;
        temp=head;
        for(int i =0;i<middle-1;i++) {
            temp=temp->next;
        }
        ListNode* curr1=temp->next;
        temp->next=NULL;
        temp=head;
        ListNode* curr=curr1;
        ListNode* prev=NULL ;
        while(curr!=NULL) {
            ListNode * save=curr->next;
            curr->next=prev;
            prev=curr;
            curr=save;
        }
        curr1=prev;
        curr=curr1;
        int max_sum=0;
        while(temp!=NULL &&curr!=NULL ) {
            int sum = temp->val + curr->val;
            if(sum>max_sum) {
                max_sum=sum;
            }
            temp=temp->next;
            curr=curr->next;
        }
        return max_sum;
    }
};