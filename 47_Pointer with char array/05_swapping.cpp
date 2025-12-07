#include <iostream>
using namespace std;

// Function 1: Swap using Call by Reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function 2: Swap using Pointers (Call by Address)
void swapByPointer(int *a, int *b) {
    int temp = *a; // dereference to get value
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    int p = 30, q = 40;

    cout << "Before swapping (Reference): x = " << x << ", y = " << y << endl;
    swapByReference(x, y); // Call by Reference
    cout << "After swapping (Reference): x = " << x << ", y = " << y << endl;

    cout << "\nBefore swapping (Pointer): p = " << p << ", q = " << q << endl;
    swapByPointer(&p, &q); // Call by Address (passing pointers)
    cout << "After swapping (Pointer): p = " << p << ", q = " << q << endl;

    return 0;
}
