#include<iostream>
using namespace std;

// This class represents one node of a linked list
class Node{
public:
    int data;      // This will store the value of the node
    Node *next;    // This pointer will store the address of the next node

    // Constructor: runs automatically when an object is created
    Node(int val){
        data = val;     // Assign value to data
        next = NULL;    // Initially, next points to nothing
    }
};

int main(){

    // Create first node with value 10
    Node a1(10);

    // Create second node with value 20
    Node a2(20);

    // Connect first node to second node
    // a1.next stores the address of a2
    a1.next = &a2;

    // Print data of first node
    cout << "First node data: " << a1.data << endl;

    // Access second node using first node's next pointer
    cout << "Second node data: " << a1.next->data << endl;

    return 0;
}
