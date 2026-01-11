#include<iostream>
using namespace std;

class Human{
    protected:
    int age;
    string name;

    public:

    ~Human(){
        cout<<"Hello Human"<<endl;
    }

    void work(){
        cout<<"I am Working";
    }
};

class Student: public Human{

    int roll_number , fees;

    public:
    // Student(string name,int age,int roll_number,int fees ){

    //      this->name=name;
    //      this->age=age;
    //      this->roll_number=roll_number;
    //      this->fees=fees;
    // }
    ~Student(){
        cout<<"Hello Student"<<endl;
    }
};

int main(){
    Student a1;

}