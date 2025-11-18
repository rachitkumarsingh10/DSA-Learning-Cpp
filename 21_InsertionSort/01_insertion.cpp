#include<iostream>
using namespace std;

int main(){
    int arr[1000];
    int num;
    cout<<"Enter the size of array = ";
    cin>>num;

    for(int i=0;i<num;i++){
        cout<<"Enter the value = ";
        cin>>arr[i];
    }

      cout<<"Array before Shorting  ";
     for(int i=0;i<num;i++){ 
        cout<<arr[i]<<"\t";
    }


     cout<<endl;