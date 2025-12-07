//*********************************************************
// 📌 Topic: Char Array vs Pointer & Address Printing
//*********************************************************

#include<iostream>
using namespace std;

int main(){

    char ch[] = {"1 2 3 4 5"};           // char array
    cout << "ch - " << ch << endl;      // Output: ch - 1 2 3 4 5

    char *ptr = ch;                      // pointer to array
    cout << "ptr - " << ptr << endl;    // Output: ptr - 1 2 3 4 5

    cout << "ch addr - " << (void*)ch << endl;     // Output: ch addr - 0x7ffdf203e870
    cout << "ptr addr - " << (void*)ptr << endl;   // Output: ptr addr - 0x7ffdf203e870
    // prints address of char array (casting avoids printing as string)
    cout << "ptr addr - " << static_cast<void*>(ch) << endl;   // Output: ptr addr - 0x7ffeefbff550
 

    char name = 'T';                     // single char
    char *ptr1 = &name;                  // pointer to char

    cout << "ptr1 - " << ptr1 << endl;  // Output: ptr1 - T
    cout << "name - " << name << endl;  // Output: name - T

    cout << "ptr1 addr - " << (void*)ptr1 << endl; // Output: ptr1 addr - 0x7ffdf203e86f
    cout << "name addr - " << (void*)&name << endl;// Output: name addr - 0x7ffdf203e86f

    cout << "&name print - " << &name << endl;     // Output: &name print - T
}

/* NOTE:
💡 Address values vary per execution, may differ in your system
*/

