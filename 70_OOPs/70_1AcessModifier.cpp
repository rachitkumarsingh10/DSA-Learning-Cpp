#include<iostream>
using namespace std;

class Student {
    private:
    string name;
    int age, roll_no ;
    string grade;


    // Function Getter and Setter 

    public:
    void setname(string n){
        name=n;
    }
    void setage(int a){
        age=a;
    }
       void setrollno(int r){
        roll_no=r;
    }
      void setgrade(string g){
        grade=g;
    }
    void getinfo(){
        cout<<name<<endl;
        cout<<age<<endl<<roll_no<<endl<<grade<<endl;

    }

};

int main(){
    Student s1,s2,s3,s4;

    // s1.name="Rohit";
    // s1.age=21;
    // s1.roll_no=1;
    // s1.grade="A+";

    s1.setname("Rohit");
    s1.setage(22);
    s1.setgrade("A+");
    s1.setrollno(1);

    s1.getinfo();
}