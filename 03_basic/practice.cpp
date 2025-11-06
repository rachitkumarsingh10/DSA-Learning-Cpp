#include<iostream>
using namespace std;
int main(){
   int arr[3]={1,2,3};
   for(int i=0;i<3;i++){
    for(int j=i+1;j<3;j++){
        if(i<j){
            cout<<i<<" "<<j;
        }
    }
   }

}

    // int arr[4]={70,80,90,100};
    // cout<<arr[0]<<endl<<arr[3];

//   int a=6,b=4;

//   if(a+b==10){
//     cout<<"Correct Sum";
//   }