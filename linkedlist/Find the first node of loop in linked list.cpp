/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        unordered_map<Node *,int>hashmap;
        Node *temp=head;
        while(temp){
            if(hashmap.find(temp)!=hashmap.end()){
                return hashmap[temp];
            }
            hashmap[temp]=temp->data;
            temp=temp->next;
        }
        return -1;
        // code here
       
    }
};