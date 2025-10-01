/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        unordered_map<Node *,int>hashmap;
        Node *temp=head;
        while(temp){
            if(hashmap.find(temp)!=hashmap.end()){
                return true;
            }
            hashmap[temp]=temp->data;
            temp=temp->next;
        }
        return false;
        
    }
};