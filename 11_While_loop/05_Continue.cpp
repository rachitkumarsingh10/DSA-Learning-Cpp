#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int i=0;
    while(i<=num){
         i++;
        if(i==4){
            continue;
        }
        cout<<i<<"\t";
       
    }
}