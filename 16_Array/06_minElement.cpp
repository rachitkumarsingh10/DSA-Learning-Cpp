#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5]={3,5,2,5,6};

    int ans=INT_MAX;


    for(int i=0;i<5;i++){
        

        if(arr[i]<ans)
          ans=arr[i];
    }


    cout<<" the minimum element is "<< ans;
}