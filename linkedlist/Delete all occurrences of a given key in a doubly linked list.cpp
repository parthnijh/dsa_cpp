// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        Node *temp=*head_ref;
       
        while(temp){
           Node *prev=temp->prev;
           Node *next=temp->next;
           if(temp->data==x){
               if(temp==*head_ref){
                   *head_ref = (*head_ref)->next;

               }
               if(next) next->prev=temp->prev;
               if(prev) prev->next=temp->next;
               delete temp;
               temp=next;
              
           }
           else{
               temp=temp->next;
           }
            
            
        }
        
        // Write your code here
        
    }
};