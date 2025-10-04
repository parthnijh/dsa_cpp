/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // code here
        Node *lastnode=head;
        
        while(lastnode->next!=nullptr){
            lastnode=lastnode->next;
        }
        int count=0;
        while(count<k){
            Node *next=head->next;
            lastnode->next=head;
            lastnode=head;
            head->next=nullptr;
            if(next)head=next;

            count++;
            
        }
        return head;
        
    }
};