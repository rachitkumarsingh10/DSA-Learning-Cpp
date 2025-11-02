#include<iostream>
using namespace std;

int main(){

    char ch[]={"1 2 3 4 5"};
    cout<<"ch - "<<ch;
    cout<<endl;

    char *ptr=ch;
    cout<<"ptr - "<<ptr <<endl;

     cout<<"ch - "<<(void*)ch;
    cout<<endl;

    cout<<" void* ptr - "<<(void*)ptr<<endl;

    char name='T';
    char *ptr1=&name;

    cout<<"ptr1 - "<<ptr1<<endl;
    cout<<"name - "<<name<<endl;
    cout<<"(void *)ptr1 - "<<(void *)ptr1<<endl;
    cout<<"(void *)&name -"<<(void *)&name<<endl;
     cout<<"&name - "<<&name<<endl;

}