#include<iostream>
#include<vector>
using namespace std;

bool print(int arr[],int index,int n, int sum,int target){

   
     if(target==0)
        return 1;
    if(index==n||target<0){
        return 0;
    }
    
    

   
    return print(arr,index+1,n,sum,target)||print(arr,index+1,n,sum,target-arr[index]);
    
}


int main(){
    int arr[]={3,6,4,7};

    cout<<print(arr,0,4,0,12);
}