/*
class Node {
public:
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
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        Node *first=head1;
        Node *second=head2;
        unordered_map<Node *,int>hashmap;
        while(first!=nullptr){
            hashmap[first]=first->data;
            first=first->next;
        };
        while(second!=nullptr){
            if(hashmap.find(second)!=hashmap.end()){
                return second;
            }
            second=second->next;
        }
        return head1;
    }
};