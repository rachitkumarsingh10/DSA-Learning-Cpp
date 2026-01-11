#include<iostream>
using namespace std;

void p(int arr[],int index, int n){

    if(index<0) return;

    cout<<arr[index]<<"\t";
    p(arr,index-1,n);
}

int main(){

    int arr[]={3,4,1,2,8};
    p(arr,4,5);
}