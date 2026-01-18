#include<iostream>
using namespace std;

// Class for one node of the linked list
class Node{
public:
    int data;      // stores the value of the node
    Node *next;    // pointer to the next node

    // Constructor to initialize a node
    Node(int val){
        data = val;   // assign the value
        next = NULL;  // initially points to nothing
    }
};

int main(){

    // Creating nodes dynamically using 'new'
    Node *head = new Node(10);   // first node
    Node *second = new Node(20); // second node
    Node *third = new Node(30);  // third node

    // Linking nodes together
    head->next = second;   // first node points to second
    second->next = third;  // second node points to third
    // third->next is already NULL

    // Traversing the linked list and printing values
    Node *temp = head;     // start from head
    cout << "Linked List: ";
    while(temp != NULL){
        cout << temp->data << " ";  // print current node's data
        temp = temp->next;          // move to next node
    }
    cout << endl;

    return 0;
}
