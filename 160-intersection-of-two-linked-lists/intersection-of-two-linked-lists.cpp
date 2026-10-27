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
        int count1=0;
        while(temp1!=NULL) {
            count1++;
            temp1=temp1->next;
        }
        temp1=headA;
        int count2=0;
        while(temp2!=NULL) {
            count2++;
            temp2=temp2->next;
        }
        temp2=headB;
        int max_count=abs(count1-count2);
        if(count2<count1) {
            while(max_count--){
                temp1=temp1->next;
            }

        }
        else {
            while(max_count--){
                temp2=temp2->next;
            }

        }
        while(temp1!=NULL && temp2!=NULL) {
            if(temp1==temp2) {
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        
        }
        return NULL;

        
    }
};