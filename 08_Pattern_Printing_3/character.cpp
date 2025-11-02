#include<iostream>
using  namespace std;
int main(){

    cout<<endl;
    int num;
    cout<<"num=";
    cin>>num;
    for(int row=1;row<=num;row++){
         char ch='a'+row-1;
        for(int column=1;column<=num-row;column++){
       
        cout<<" ";
        }
        for(int column2=1;column2<=row;column2++){
        cout<<ch; 
        }
        cout<<endl;
}
}