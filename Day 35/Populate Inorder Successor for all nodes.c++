// Link => 

/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};
*/
class Solution {
    void inorder(Node* a,Node **pre){
        if(!a) return;
        inorder(a->left,pre);
        (*pre)->next = a;
        *pre = a;
        inorder(a->right,pre);
        return;
    }
  public:
    void populateNext(Node *root) {
        // code here
        Node *temp = new Node(-1);
        inorder(root, &temp);
        return;
    }
};
