#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a Number = ";
    cin>>x;
    int num=x,rev=0;
    int sign=1;


    if(num<0){
        num=-num;
        sign=-1;
    }
    while(num>=1){
    rev=rev*10+num%10;
    num=num/10;
    }
    rev=rev*sign;
    if(rev==x)
    cout<<"Palindrome";


    return 0;
}
