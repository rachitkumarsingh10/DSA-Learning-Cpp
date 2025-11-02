#include<iostream>
using namespace std;
int main(){
    cout<<endl;
    int num;
    cout<<"Enter Number = ";
    cin>>num;

    int rem,ans=0, mul=1;

    while(num>0){
        rem=num%2;
        num=num/2;
        ans=(rem*mul)+ans;
        mul= mul*10;
    }

    cout<<"Decimal Number is "<<ans;
}