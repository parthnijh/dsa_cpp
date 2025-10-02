/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node *prev=nullptr;
        Node *current=head;
        while(current){
            Node *next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        };
        return prev;
    }
};