#include<iostream>
using namespace std;

void p(int arr[],int index, int n){

    if(index==n) return;

    cout<<arr[index]<<"\t";
    p(arr,index+1,n);
}

int main(){

    int arr[]={3,4,1,2,8};
    p(arr,0,5);
}