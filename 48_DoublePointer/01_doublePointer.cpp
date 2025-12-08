#include<iostream>
using namespace std;

int main(){

    int n = 100;     // normal integer variable
    int *p = &n;     // pointer storing address of n
    int **p2 = &p;   // double pointer storing address of pointer p
    int ***p3 = &p2; // triple pointer storing address of pointer p2
   

    // cout << "n = " << n << endl;
    // cout << "&n = " << &n << endl;

    // cout << "p = " << p << " , &p = " << &p << " , *p = " << *p << endl;
    // cout << "p2 = " << p2 << " , &p2 = " << &p2 << " , **p2 = " << **p2 << endl;
    // cout << "p3 = " << p3 << " , &p3 = " << &p3 << " , ***p3 = " << ***p3 << endl;

     ***p3 = ***p3 + 10;  // changing value of n using triple pointer

    cout << n;  // prints updated value of n
}
