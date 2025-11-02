#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age, roll_no ;
    string grade;

};

int main(){
    Student s1,s2,s3,s4;

    s1.name="Rohit";
    s1.age=21;
    s1.roll_no=1;
    s1.grade="A+";

    cout<<s1.name<<"   "<<s1.age;
}

