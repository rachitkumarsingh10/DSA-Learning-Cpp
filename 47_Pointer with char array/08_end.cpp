#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ===============================
// Function to modify vector<int>
// Pass by reference: &vec
// Original vector is modified
// ===============================
void modifyVector(vector<int> &vec) {
    for(int i = 0; i < vec.size(); i++)
        vec[i] = vec[i] * 2; // double each element
}

// ===============================
// Function to modify string
// Pass by reference: &s
// Original string is modified
// ===============================
void modifyString(string &s) {
    s = "Hello_" + s; // add prefix
}

// ===============================
// Function to modify integer array
// Passed as pointer
// Original array is modified
// ===============================
void modifyIntArray(int *arr, int size) {
    for(int i = 0; i < size; i++)
        arr[i] = arr[i] + 10; // add 10 to each element
}

// ===============================
// Function to modify character array (C-string)
// Passed as pointer
// Original array is modified
// ===============================
void modifyCharArray(char *chArr) {
    for(int i = 0; chArr[i] != '\0'; i++) {
        if(chArr[i] >= 'a' && chArr[i] <= 'z')
            chArr[i] = chArr[i] - 32; // convert to uppercase
    }
}

int main() {
    // -------------------------------
    // Vector<int> example
    // -------------------------------
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Vector before modification: ";
    for(auto n : numbers) cout << n << " ";
    cout << endl;

    modifyVector(numbers); // pass by reference

    cout << "Vector after modification: ";
    for(auto n : numbers) cout << n << " ";
    cout << endl << endl;

    // -------------------------------
    // String example
    // -------------------------------
    string name = "Alice";
    cout << "String before modification: " << name << endl;

    modifyString(name); // pass by reference

    cout << "String after modification: " << name << endl << endl;

    // -------------------------------
    // Integer array example
    // -------------------------------
    int arr[5] = {5, 10, 15, 20, 25};
    cout << "Int array before modification: ";
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    modifyIntArray(arr, 5); // pass by pointer

    cout << "Int array after modification: ";
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl << endl;

    // -------------------------------
    // Character array example
    // -------------------------------
    char word[] = "helloWorld";
    cout << "Char array before modification: " << word << endl;

    modifyCharArray(word); // pass by pointer

    cout << "Char array after modification: " << word << endl;

    return 0;
}

/* ==============================
Notes:

1. vector<int> &vec
   - Pass by reference
   - Original vector is modified
   - Efficient for large vectors

2. string &s
   - Pass by reference
   - Original string is modified

3. int *arr
   - Array passed as pointer
   - Original array is modified

4. char *chArr
   - Character array passed as pointer
   - Original array is modified
============================== */

