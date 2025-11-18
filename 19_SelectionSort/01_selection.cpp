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
        int index=i;
        for(int j=i+1;j<num;j++){
            if(arr[index]>arr[j])
                    index=j;
        }
    swap(arr[i],arr[index]);

    }

    cout<<endl;

    cout<<"Array after Shorting  ";
         for(int i=0;i<num;i++){ 
        cout<<arr[i]<<"\t";
    }
}