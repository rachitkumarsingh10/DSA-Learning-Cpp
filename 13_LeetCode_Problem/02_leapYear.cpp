#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Year =";
    cin>>num;

    if(num%400==0){
        cout<<"Its a Leap year";
    }
    else if(num%4==0 && num%100!=0){
        cout<<"Its a Leap year";
    }
    else {
        cout<<"This is not a leap year";
    }
}