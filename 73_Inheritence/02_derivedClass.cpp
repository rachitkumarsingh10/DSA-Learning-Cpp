#include<iostream>
using namespace std;

class Human{

    protected:
     string name;
     int age , weight;
};

class Student:protected Human{

    private :
    int roll_number, fees;

    
    public:

    void fun(string a,int b,int c){
        name=a;
        age=b;
        weight=c;
    }

    void display(){
        cout<<name<<" "<<age<<" "<< weight;
    }
};

int main(){
    Student A;
    A.fun("Rohit",10,45);
    A.display();

}