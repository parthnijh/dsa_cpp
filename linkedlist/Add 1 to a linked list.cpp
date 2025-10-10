/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
// Traversal
class Solution {
public:
    Node* addOne(Node* head) {
        // Step 1: Reverse the linked list
        Node *prev = nullptr, *current = head, *next = nullptr;
        while (current) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;

        // Step 2: Add 1 to the reversed list
        current = head;
        int carry = 1;
        while (current) {
            int sum = current->data + carry;
            current->data = sum % 10;
            carry = sum / 10;
            if (!current->next && carry) {
                // if we are at the last node and there is a carry
                current->next = new Node(carry);
                carry = 0;
            }
            current = current->next;
        }

        // Step 3: Reverse the list back
        prev = nullptr;
        current = head;
        while (current) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;

        return head;
    }
};
// Recursion
/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    int helper(Node *temp){
        if(temp==nullptr) return 1;
        int carry=helper(temp->next);
        temp->data+=carry;
        if(temp->data<10) return 0;
        temp->data=0;
        return 1;
    }
    Node* addOne(Node* head) {
        // Your Code here
        int carry=helper(head);
        if(carry){
            Node *newnode=new Node(1);
            newnode->next=head;
            head=newnode;
        }
        return head;
        
        
        // return head of list after adding one
    }
};