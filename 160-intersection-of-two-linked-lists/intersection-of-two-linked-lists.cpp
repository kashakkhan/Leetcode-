/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int count=0;
        while(temp1!=NULL) {
            count++;
            temp1=temp1->next;
        }
        temp1=headA;
        int count1=0;
        while(temp2!=NULL) {
            count1++;
            temp2=temp2->next;
        }
        temp2=headB;
        int Mcount=abs(count-count1);
        if (count>count1) {
            while(Mcount--) {
                temp1=temp1->next;
            }
        }
        else {
            while(Mcount--){
                temp2=temp2->next;
            }
        }

        while(temp1!=NULL && temp2!=NULL) {
            if(temp1==temp2 ){
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        
        }
        return NULL;
        
    }
};