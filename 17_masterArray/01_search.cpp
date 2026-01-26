#include<iostream>
using namespace std;

int main(){
    int arr[]={2,4,1,3,3,22,221,112},x;
    cin>>x;
    int key=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(x==arr[i]){
            cout<<"Found";
             key=1;
            break;
        }
    }
    if(key==0)
    cout<<"Not Found";
}