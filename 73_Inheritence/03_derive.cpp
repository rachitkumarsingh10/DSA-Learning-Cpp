#include<iostream>
using namespace std;

class Human{

    string Religion, skin;
    protected:
     string name;
     int age , weight;
};

class Student:private Human{

    private :
    int roll_number, fees;

    
    public:
    Student(){
    }

    Student(string a,int b,int c,int d,int e){
        name=a;
        age=b;
        weight=c;
        roll_number=d;
        fees=e;
    }

    void display(){
        cout<<name<<" "<<age<<" "<< weight<<" "<<roll_number<<"  "<<fees;
    }
};

int main(){
    Student A("Rohit",10,45,32,1200);
    Student A2;
    A.display();

}