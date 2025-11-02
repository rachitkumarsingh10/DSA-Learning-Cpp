#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    int *ptr=arr;


    cout<<"Address odf array and pointer"<<endl;
    cout<< "arr - "<<arr<<endl;
    cout<<"&ptr - "<<&ptr<<endl;
    
    for(int i=0;i<5;i++){
        cout<<*ptr+i<<"\t";
        
    }
    cout<<endl;


    // Arthemetic Operation
    for(int i=0;i<5;i++){
        cout<<*ptr<<"\t";
        ptr++;
    }
    cout<<endl;

    ptr=&arr[4];
     for(int i=0;i<5;i++){
        cout<<*ptr<<"\t";
        ptr--;
    }
    cout<<endl;

    

}