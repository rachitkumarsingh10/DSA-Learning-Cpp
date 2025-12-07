#include <iostream>
#include <vector>
using namespace std;

// ===============================
// Function to modify vector
// Pass by Reference: &temp
// - temp is an alias to vector v in main()
// - Any changes inside this function will affect the original vector
// ===============================
void pass(vector<int> &temp) {
    for(int i = 0; i < 5; i++)
        temp[i] = 20;  // change each element to 20
}

// ===============================
// Function to modify array
// Arrays cannot be passed by value in C++
// - Writing int p[] or int *p passes the address of first element
// - Changes inside function affect original array
// ===============================
void dob(int p[]) {
    for(int i = 0; i < 5; i++) {
        p[i] = p[i] * 2;  // double each element
    }
}

int main() {
    // -------------------------------
    // Vector example
    // - Size 5, all initialized to 0
    // - Passed by reference to function 'pass'
    // -------------------------------
    vector<int> v(5, 0);  // v = [0, 0, 0, 0, 0]
    pass(v);               // modifies original vector

    // Print modified vector
    cout << "Vector after pass by reference: ";
    for(int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // -------------------------------
    // Array example
    // - Normal array of size 5
    // - Passed to function 'dob' (actually passes pointer)
    // - Original array is modified
    // -------------------------------
    int arr[5] = {1, 2, 3, 4, 5};
    dob(arr);  // doubles each element

    // Print modified array
    cout << "Array after passing to function: ";
    for(int i = 0; i < 5; i++)
        cout << arr[i] << "\t ";

    return 0;
}

/* ==============================
Notes:
1. Pass by Reference:
   - Syntax: int &x
   - Function gets alias to original variable
   - Changes inside function affect original

2. Arrays in C++:
   - Cannot pass entire array by value
   - Passing array name decays to pointer
   - Function works on original array

3. Vectors in C++:
   - Can be passed by value (copy) or reference
   - Pass by reference (&) is efficient for large vectors

4. Memory behavior:
   - Vector temp &v shares same memory as v
   - Array p[] points to original array memory
============================== */

