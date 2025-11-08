#include<iostream>
using namespace std;

int main(){
   
    cout<<"Enyter the size of array"<<endl;
    int size;
    cin>>size;
    // int arr[size];  bad practice 
     int arr[10000];


    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }
}