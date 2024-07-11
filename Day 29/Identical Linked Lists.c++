// Link => https://www.geeksforgeeks.org/problems/identical-linked-lists/1

/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to check whether two linked lists are identical or not.
bool areIdentical(struct Node *head1, struct Node *head2) {
    // Code here
    Node* temp1 = head1;
  
      Node* temp2 = head2;
      while(temp1 != NULL || temp2 != NULL)
      {
         if(temp1 == NULL || temp2 == NULL)
         {
             return false;
         }
         if(temp1 -> data != temp2 -> data )
         {
             return false;
         }
         temp1 = temp1 -> next;
         temp2 = temp2 -> next;
         
      }
      return temp1==NULL && temp2==NULL;
}
