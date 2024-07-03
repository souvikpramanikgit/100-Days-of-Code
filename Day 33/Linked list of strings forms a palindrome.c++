// Link => https://www.geeksforgeeks.org/problems/linked-list-of-strings-forms-a-palindrome/1

/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool compute(Node* head) {
        // Your code goes here
        
        string s = "";
        Node *temp = head;
        while(temp!=NULL){
            s += temp->data;
            temp = temp->next;
        }
        int n = s.length();
        int l = 0;
        int h = n-1;
        while(l<=h){
            if(s[l]!=s[h])return 0;
            l++;
            h--;
        }
        return 1;
    }
};
