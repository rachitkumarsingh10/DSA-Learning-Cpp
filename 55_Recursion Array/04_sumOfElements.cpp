#include<iostream>
using namespace std;

int sum(int arr[],int index){

    if(index<0) return 0;

    return arr[index]+sum(arr,index-1);
    
}

int main(){

    int arr[]={3,4,1,2,8};
    int res= sum(arr,4);
    cout<<res;
}