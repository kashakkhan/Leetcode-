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
        ListNode* temp=head;
              int count=0;
                if(head==NULL || head->next==NULL) {
                    return 
                    ;
                }
                while(temp!=NULL) {
                    temp=temp->next;
                    count++;
                }
                int middle=count/2;
                temp=head;
                for(int i =0;i<middle;i++){
                    temp=temp->next;
                }
                ListNode* save=temp->next;
                temp->next=NULL;
                ListNode*a=save;
        
                ListNode*prev=NULL;
                while(save!=0) {
                    ListNode* curr=save->next;
                    save->next=prev;
                    prev=save;
                    save=curr;
                }
                a=prev;
                save=a;
                temp=head;
               
            
                while(temp != NULL && save != NULL) {
                    ListNode* l1 = temp->next;
                    ListNode* l2 = save->next;
        
                    temp->next = save;
                    save->next = l1;
        
                    temp = l1;
                    save = l2;
                    }
                
        
    
            
            
        
    }
};