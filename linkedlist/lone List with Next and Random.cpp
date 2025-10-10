/*
class Node {
  public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
  public:
    Node* cloneLinkedList(Node* head) {
        // code here
        Node *dummy=new Node(-1);
        Node *current=dummy;
        int size=0;
        int counter=0;
        unordered_map<Node *,Node *>map;
        Node *temp=head;
        while(temp){
            Node *newnode=new Node(temp->data);
            current->next=newnode;
            current=newnode;
            map[temp]=current;
            temp=temp->next;
            
        };
        temp=head;
        Node *temp1=dummy->next;
        while(temp && temp1){
            temp1->random=map[temp->random];
            temp1=temp1->next;
            temp=temp->next;
            
        };
        return dummy->next;
        
    }
};