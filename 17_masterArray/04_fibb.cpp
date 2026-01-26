#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int arr[1000];

    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<=x;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }

    cout<<arr[x];
}

// long long a = 0, b = 1, c;
// for(int i = 2; i <= x; i++){
//     c = a + b;
//     a = b;
//     b = c;
// }
// cout << b;