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

    for(int i=0;i<num;i++){
        bool swapped=0;
        for(int j=0;j<num-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0){
            cout<<" Array is Shorted";
            break;
        }

    }

    cout<<"Array after Shorting  ";
    for(int i=0;i<num;i++){ 
        cout<<arr[i]<<"\t";
    }


}