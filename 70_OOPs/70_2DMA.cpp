#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age, roll_no ;
    string grade;

    void getinfo(){
    cout<<name<<endl;
    cout<<age<<endl<<roll_no<<endl<<grade<<endl;

    }

};

int main(){
    
    Student *s1 = new Student;
    (*s1).name="Rohit";
    (*s1).age=21;
    (*s1).roll_no=1;
    (*s1).grade="A+";

    (*s1).getinfo();

    Student *s2= new Student;
    s2->name="raman";
    s2->age=21;
    s2->roll_no=2;
    s2->grade="C+";

    s2->getinfo();

    free(s1);
    free(s2);
}