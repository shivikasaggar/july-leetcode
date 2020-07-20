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
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            if(head->val==val){
                return NULL;
            }
            else {
                return head;
            }
        }
        ListNode*temp=head;
        ListNode*prev;
        while(temp!=NULL&&temp->val==val){
            head=temp->next;
           // free(temp);
            temp=head;
        }
        while(temp!=NULL){
            while(temp!=NULL&&temp->val!=val){
                prev=temp;
                temp=temp->next;
            }
             if (temp == NULL) 
                 return head; 
             prev->next = temp->next; 
        temp = prev->next;
        }
       return head;  
    }
};
