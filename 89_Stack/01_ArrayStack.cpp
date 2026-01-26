#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int capacity;
    int top;

public:
    Stack(int capacity){
        this->capacity = capacity;
        top = -1;
        arr = new int[capacity];
    }

    void push(int val){
        if(top == capacity - 1){
            cout << "Stack Overflow\n";
        } else {
            top++;
            arr[top] = val;
        }
    }

    void pop(){
        if(top == -1){
            cout << "Stack Empty\n";
        } else {
            top--;
        }
    }

    void peek(){
        if(top == -1){
            cout << "Stack Empty\n";
        } else {
            cout << arr[top] << "\n";
        }
    }

    void size(){
        cout << "Stack size: " << (top + 1) << "\n";
    }

    void display(){
        if(top == -1){
            cout << "Stack is empty\n";
        } else {
            for(int i = 0; i <= top; i++){
                cout << arr[i] << "\t";
            }
            cout << "\n";
        }
    }

    ~Stack(){
        delete[] arr;
    }
};

int main(){
    Stack s(3);

    s.push(90);
    s.push(80);
    s.display();
    s.push(70);
    s.push(60);  // Should show overflow

    s.peek();
    s.pop();
    s.display();
    s.size();
}
