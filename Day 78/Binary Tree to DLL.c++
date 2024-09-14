// Link => https://www.geeksforgeeks.org/problems/binary-tree-to-dll/1

/* Structure for tree and linked list

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return head to the DLL
class Solution {
  public:
    Node* prev=NULL;
    Node* head=NULL;
    void fun(Node* root){
        if(!root)
            return;
        fun(root->left);
        if(!prev)
            head=root;
        else{
            prev->right=root;
            root->left=prev;
        }
        prev=root;
        fun(root->right);
        return;
    }
    Node* bToDLL(Node* root) {
        // code here
        fun(root);
        return head;
    }
};
