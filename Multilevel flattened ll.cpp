/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
Node*helper(Node*head){
  Node*temp=head;
        Node*tail=head;
        while(temp){
            Node*child=temp->child;
            Node*next=temp->next;
            if(child){
                Node*_tail=helper(child);
                _tail->next=next;
                if(next){
                    
                    next->prev=_tail;
                }
                    temp->next=child;
                    child->prev=temp;
                    temp->child=NULL;
                    temp=tail;
                
                
            }
            else{
                temp=next;
                
                }
            if(temp){
                    tail=temp;
            }
            
        }
        return tail;   
}
class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL){
            return head;
        }
       helper(head);
        return head;
    }
};
