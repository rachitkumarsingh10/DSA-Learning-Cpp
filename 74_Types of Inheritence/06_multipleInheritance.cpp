#include<iostream>
using namespace std;

class Engineer{
    protected:
    // int salary;
    public:
    string specialisation;


    void work(){
        cout<<"i have a specialisation  of  "<<specialisation<<endl;
    }

};

class Youtuber 
{
    public:
    int subscribers;


    void contentcreator(){
        cout<<"i have subscriber of "<<subscribers<<endl;
    }
};

class CodeTeacher:public Engineer,public Youtuber  // first the enginner call then youtuber based on declaration  
{
    public:
    string name;

    CodeTeacher(string name,string specialisation, int subscribers){
        this->name=name;
        this->specialisation=specialisation;
        this->subscribers=subscribers;
    }

    void showcase(){
        cout<<name<<"  "<<endl;
        work();
        contentcreator();
    }

};


int main(){
    CodeTeacher a1("Rohit","CSE",49000);

    a1.showcase();
    // a1.salary=100; Error 




}