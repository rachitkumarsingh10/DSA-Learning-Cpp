//*****************************************************
// 📌 Topic: Difference in Printing char, int, and arrays
//*****************************************************

#include<iostream>
using namespace std;

int main(){

    char ch[] = {"1 2 3 4 5"};             // char array (string)
    cout << "ch - " << ch << endl;        // Output: ch - 1 2 3 4 5

    int num[] = {1,2,3,4,5};               // int array
    cout << "num - " << num << endl;       // Output: num - 0x7ffdb0a238a0  (prints address)


 //******************************************************************************************//

    char name = 'a';                       // single char
    cout << "name - " << name << endl;     // Output: name - a

    int number = 5;                        // integer variable
    cout << "number - " << number << endl; // Output: number - 5
    
}

