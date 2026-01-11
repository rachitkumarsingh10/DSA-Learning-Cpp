#include<iostream>
using namespace std;

class Human{
    protected:
    int age;
    string name;

    public:
    Human(){

    }
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


class Teacher: public Human{

    int salary;

    public:
    Teacher(string name,int age,int salary ):Human(name,age)
    {

         this->name=name;
         this->age=age;
         this->salary=salary;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<salary<<endl;
    }
};




int main(){
    Student a1("ram",13,1,2000);
    a1.display();
    Teacher t1("Tanisk",39,3400);
    t1.display();
}