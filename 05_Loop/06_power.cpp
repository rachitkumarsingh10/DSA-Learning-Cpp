#include<iostream>
using namespace std;

int main(){
    int p,n,res=1;
    cout<<"Enter The Number = ";
    cin>>n;
    cout<<"Enter The Power = ";
    cin>>p;
    for(int i=1;i<=p;i=i+1){
        res=res*n;
    }
    cout<<res;

}