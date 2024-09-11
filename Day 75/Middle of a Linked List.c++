// Link => https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1

// struct Node {
//     int data;
//     Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }

// }; 
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        if(head==nullptr) return 0;
        Node* temp1=head;
        Node* temp2=head;
        while(temp2!=nullptr && temp2->next!=nullptr){
            temp1=temp1->next;
            temp2=temp2->next->next;
        }
        return temp1->data;
    }
};
