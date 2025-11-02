#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter The Number = ";
    cin>>n;
    for(int i=1;i<=n;i=i+1)
       sum=sum+i;

cout<<"Natural number sum =  "<< sum<<endl;

cout<<"Natural number sum =  "<< (n*(n+1))/2;
}