#include<iostream>
using namespace std;

/*
    Function: dob
    Purpose: Demonstrates Pass by Pointer (Array passed by reference)
    Explanation:
        - When we pass an array to a function, it automatically behaves like a pointer.
        - So any modification inside the function updates the original array.
*/
void dob(int *ptr){        // alternative syntax: void dob(int ptr[])
      for(int i = 0; i < 5; i++){
        ptr[i] = 2 * ptr[i];   // doubling each element of original array
      }
}


// NOTE: Arrays in C++ cannot be passed by value.
// When we write arr[] as a parameter, it actually passes
// the ADDRESS of the first element (pointer), not the whole copy.
// Therefore, any change inside this function affects the original array.

int main(){

    int arr[5] = {1,2,3,4,5};  // original array

    dob(arr);   // passing array (behaves as pointer)

    // Printing updated values
    for(int i = 0; i < 5; i++){
        cout << arr[i] << "\t";    // Output: 2    4    6    8    10
    }
    cout << endl;

    return 0;
}
