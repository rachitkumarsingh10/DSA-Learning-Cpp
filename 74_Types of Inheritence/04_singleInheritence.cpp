#include<iostream>
using namespace std;

class Human{
    protected:
    int age;
    string name;

    public:
    Human(string name,int age){
        this->name=name;
        this->age=age;
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }

};

class Student: public Human{

    int roll_number , fees;

    public:
    Student(string name,int age,int roll_number,int fees ):Human(name,age)
    {

         this->name=name;
         this->age=age;
         this->roll_number=roll_number;
         this->fees=fees;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<roll_number<<"   "<<fees<<endl;
    }
};

int main(){
    Student a1("ram",13,1,2000);
    a1.display();
}