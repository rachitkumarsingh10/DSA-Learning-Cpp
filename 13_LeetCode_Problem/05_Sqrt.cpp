#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number =";
    cin>>num;
    int ans,rem;
    while(num>9){
        ans=0;
    while(num!=0){
        rem=num%10;
        num=num/10;
        ans=ans+rem;
    }
    num=ans;
    }

    cout<<" the digit is = "<<ans;
    return 0;
}