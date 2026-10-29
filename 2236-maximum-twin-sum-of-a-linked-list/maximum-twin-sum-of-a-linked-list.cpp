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
        temp=head;
        int middle=count/2;
        for(int i =0;i<middle-1;i++) {
            temp=temp->next;
        }
        ListNode*save=temp->next;
        temp->next=NULL;

        temp=head;
        int max=0;
        ListNode* prev=NULL;
        while(save!=NULL) {
            ListNode* curr=save->next;
            save->next=prev;
            prev=save;
            save=curr;
        }
        save=prev;
        while(temp!=NULL&& save!=NULL) {
            int sum=temp->val+save->val ;
            if(sum>max) {
                max=sum;
            }
            save=save->next;
            temp=temp->next;
        }
        return max;}
};