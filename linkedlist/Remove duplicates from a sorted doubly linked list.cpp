/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        Node *current=head;
        unordered_set<int>hashset;
        while(current){
            Node *temp=current;
            Node *prev=current->prev;
            Node *next=current->next;
           
            if(hashset.find(current->data)!=hashset.end()){
                if(prev)prev->next=next;
                if(next)next->prev=prev;
                delete temp;
            }
            else{
                 hashset.insert(current->data);
            }
            
            current=next;
            
            
        }
        return head;
    }
};