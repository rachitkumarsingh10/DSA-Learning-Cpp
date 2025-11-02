#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int i=1;
    while(i<=num){
        if(i==4){
            break;
        }
        cout<<i<<"\t";
        i++;
    }
}