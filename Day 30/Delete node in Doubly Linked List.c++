// Link => https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1

/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;

  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }

};
*/

class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(head==NULL) return NULL; //empty linked list
        if(head->next==NULL) {     //single node
            delete head;
            return NULL;
        }
        Node *temp = head;
        int count=1;
        while(count<x){
            temp = temp->next;
            count++;
        }
        if(temp->next==NULL){   // last node
            temp->prev->next = NULL;
            delete temp;
            return head;
        }
        else if(temp->prev==NULL){  //first node
            head = head->next;
            head->prev = NULL;
            delete temp;
            return head;
        }
        else {        // node at position x
            
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
            return head;
        }
    }
};
