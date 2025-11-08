#include<iostream>
using namespace std;
char convert(char name){
    return  name -'a'+ 'A'; 
}

int main(){
    char name;
    cout<<"Enter a  lowercase character :- ";
    cin>>name;

    cout<<convert(name);
    return 0;
}