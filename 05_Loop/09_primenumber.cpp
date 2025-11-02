#include<iostream>
using namespace std;

int main(){
    int n,primeno;


    cout<<"Enter The Number = ";
    cin>>n;

    if(n<2){
        cout<<"not prime";
        return 0;
    }

    for(int i=2;i<n;i=i+1)
       {
        if(n%i==0){
       cout<<"not prime";
        return 0;
        }
       }
       cout<<"Prime";


}