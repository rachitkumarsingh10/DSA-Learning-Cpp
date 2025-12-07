#include<iostream>
using namespace std;

/*
    Function: incr
    Purpose: Demonstrate Pass by Value
*/
void incr(int n){
    n++;   // increases only the local copy of n
}

/*
    Function: incrP
    Purpose: Demonstrate Pass by Pointer (Pass by Reference using pointer)
*/
void incrP(int *ptr){
    *ptr = *ptr + 1;   // changes original `n` because ptr stores its address
}

int main(){
    int n = 10;    // original variable
    int temp = n;  // storing same value to compare

    // Calling pass-by-value function
    incr(n);
    cout << "After incr(n) --> n = " << n << " , temp = " << temp << endl;  // After incr(n) --> n = 10 , temp = 10

    // Calling pass-by-pointer function
    incrP(&n);
    cout << "After incrP(&n) --> n = " << n << " , temp = " << temp << endl; // After incrP(&n) --> n = 11 , temp = 10

    return 0;
}




