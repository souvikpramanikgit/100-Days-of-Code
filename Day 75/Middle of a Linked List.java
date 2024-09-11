// Link => https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1


/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
*/

class Solution {
    int getMiddle(Node head) {
        // Your code here.
        if(head==null) return 0;
        Node temp1=head;
        Node temp2=head;
        while(temp2.next!=null && temp2.next.next!=null){
            temp1=temp1.next;
            temp2=temp2.next.next;
        }
        if(temp2.next==null) return temp1.data;
        if(temp2.next.next==null) temp1=temp1.next;
        return temp1.data;
    }
}
