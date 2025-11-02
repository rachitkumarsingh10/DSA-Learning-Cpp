#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_num,balance;
    static int total_Customer;

    public:
   

    Customer(string name, int acc_num, int balance){
        this->name=name;
        this->acc_num=acc_num;
        this->balance=balance;
        total_Customer +=1;
    }

    void display(){
        cout<<name<<" "<<acc_num<<" " <<balance<<" "<< total_Customer<<endl;

    }
    void display_total(){
        cout<<total_Customer<<endl;
    }
    //Static Function - class Function
    static void access(){
        cout<<total_Customer<<endl;
    }
};

int Customer:: total_Customer=0;

int main(){
   
    Customer a1("Rohit",1,1000);
    Customer a2("Mohit",2,1010);
    Customer a3("Mohan",3,2000);

    Customer::access();

    // How to calaculate total object 
    a1.display_total();
    
}