// Link => https://www.geeksforgeeks.org/problems/mirror-tree/1

// function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(node==NULL) return ;
        
        mirror(node->left);
        mirror(node->right);
        
        Node* left_pos=node->left;
        node->left=node->right;
        node->right=left_pos;
    }
};
