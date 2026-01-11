#include<iostream>
using namespace std;

class Person{
    protected:
    string name;

    public:
    void introduce(){
        cout<<"Hello my name is "<<name<<endl;
    }
};

class Employee: public Person
{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"My salary is "<<salary<<endl;
    }
};

class Manager:public Employee
{
    public:
    string department;

    Manager(string name , int salary,string department){
        this->name=name;
        this->salary=salary;
        this->department=department;

    }
    
    void work(){
        cout<<"I am in the departement "<<department<<endl;
    }

};

int main(){
    Manager a1("Rohit",30000,"CSE");
    a1.introduce();
    a1.monthly_salary();
    a1.work();

    a1.department="EC";
    a1.work();
}

