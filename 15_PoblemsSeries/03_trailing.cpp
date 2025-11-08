#include<iostream>
using namespace std;
int main(){

    int num, zero, total=0;
    cout<<"Enter a number ";

    cin>>num;
    while(num>=5){
           zero= num/5;
           num=num/5;
           total=total+zero;
    }
 
    cout<<"the total traling  zeo  factorial is "<<total;



}