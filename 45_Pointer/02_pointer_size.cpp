#include<iostream>
using namespace std;

int main(){


    int a=10;
     
    cout<<&a<<endl;
    char ch='a';
    char *p=&ch;

    int *ptr=&a;

    cout<<"Int size = "<<sizeof(a)<<endl;
    cout<<"Int pointer size = "<<sizeof(ptr)<<endl;
     cout<<"Character size = "<<sizeof(ch)<<endl;
     cout<<"Character pointer size = "<<sizeof(p)<<endl;
}