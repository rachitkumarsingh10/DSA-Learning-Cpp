#include<iostream>
using  namespace std;
int main(){
    cout<<endl;
   
    // for(char j='a';j<='e';j=j+1){
    // for(char i='a';i<=j;i=i+1){
    //     cout<<j<<" ";
    // }
    // cout<<endl;

    cout<<endl;
   
    for(int j=1;j<=5;j=j+1){
    
    char name='a'+j-1;
    for(int i=1;i<=j;i=i+1){
        cout<<name<<" ";
    }
    cout<<endl;
}
}

    
// a
// b b
// c c c
// d d d d
// e e e e e
