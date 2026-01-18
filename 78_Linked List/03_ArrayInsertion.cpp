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

    void 
};

int main(){





    cout << "Linked List: ";
    while(temp != NULL){
        cout << temp->data << " ";  // print current node's data
        temp = temp->next;          // move to next node
    }
    cout << endl;

    return 0;
}