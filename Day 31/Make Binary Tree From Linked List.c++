// Link => https://www.geeksforgeeks.org/problems/make-binary-tree/1

class Solution {
    private:
    
    TreeNode* buildTree(int i,vector<int> &arr,TreeNode *root){
        if(i>=arr.size()){
            return NULL;
        }
        
        
        root=new TreeNode(arr[i]);
        root->left=buildTree(2*i+1,arr,root->left);
        root->right=buildTree(2*i+2,arr,root->right);
        return root;
        
    }
  public:
    void convert(Node *head, TreeNode *&root) {
        if(head==NULL){
            return;
        }
        Node* temp=head;
        vector<int> arr;
        
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        root=buildTree(0,arr,root);
        return;
    }
};
