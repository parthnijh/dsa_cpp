 /*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node *merge(Node *list1,Node *list2){ 
        Node *dummy=new Node(-1); 
        Node *current=dummy; 
        while(list1!=nullptr && list2!=nullptr){ 
            if(list1->data< list2->data){ 
                current->bottom=list1; 
                current=list1; 
                list1=list1->bottom; 
                
            }else{ 
                current->bottom=list2; 
                current=list2; 
                list2=list2->bottom; 
                
            } 
            
        }; 
        if(list1) current->bottom=list1; 
        else current->bottom=list2;
        return dummy->bottom; 
        
    };
    
    Node *sort(Node * temp){
        if(temp==nullptr || temp->bottom==nullptr) return temp;
        Node *slow=temp;
        Node *fast=temp->bottom;
        while(fast!=nullptr && fast->bottom!=nullptr){
            slow=slow->bottom;
            fast=fast->bottom->bottom;
        };
        Node *middle=slow;
        Node *lefthead=temp;
        Node *righthead=middle->bottom;
        middle->bottom=nullptr;
        lefthead=sort(lefthead);
        righthead=sort(righthead);
        return merge(lefthead,righthead);
        
    }
    Node *flatten(Node *root) {
        // code here
        Node *temp=root;
        Node *dummy=new Node(-1);
        Node *current=dummy;
        
        while(temp){
           Node *newnode=new Node(temp->data);
           current->bottom=newnode;
           current=newnode;
            
            Node *child=temp->bottom;
            
            while(child){
                Node *newnode=new Node(child->data);
                current->bottom=newnode;
                current=newnode;
                child=child->bottom;
            };
            temp=temp->next;
            
        };
        
        
        
        current=sort(dummy->bottom);
        return current;
        
        
       
       
       
        
    }
};