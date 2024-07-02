// Link => https://www.geeksforgeeks.org/problems/remove-all-occurences-of-duplicates-in-a-linked-list/1

// User function Template for C++

/* Linked List node structure

struct Node {
    int data;
    struct Node *next;
};

*/

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        Node*H = nullptr;
        Node*T = nullptr;
        Node*temp = head;
        while(temp){
            int ct = 1;
            Node*q = temp->next;
            while(q and temp->data == q->data){
                q = q->next;
                ct++;
            }
            // cout << temp->data << " " << ct << endl;
            if(ct == 1){
                if(!H){
                    H = temp;
                    T = temp;
                    T->next = nullptr;
                }
                else{
                    T->next = temp;
                    T = temp;
                    T->next = nullptr;
                }
            }
            temp = q;
        }
        return H;
    }
};
