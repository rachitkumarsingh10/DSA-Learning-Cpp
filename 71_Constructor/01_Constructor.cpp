#include<iostream>
using namespace std;

class Customer
{
private:
    string name;
    int account_number;
    int balance;

public:

// Default Constructor
Customer(){
        name="Not_given";
        account_number=999;
        balance=0;
}


// Parameterised Constuctor

// Customer(string a, int n, int b){
//     name=a;
//     account_number=n;
//     balance=b;
// }


Customer(string name, int account_number, int balance){
    this->name=name;
    this->account_number=account_number;
    this->balance=balance;
}



// Constructor Overloading
Customer(string n, int a){
    name=n;
    account_number=a;
    balance=50;
}

// Inline Construtor
inline Customer(string s ): name(s), account_number(104),balance(100){

}

// Copy Constructor 
Customer(Customer &B){
    name=B.name;
    account_number=B.account_number;
    balance=B.balance;
}

void display(){
    cout<<name<<" "<<account_number<<" "<<balance<<endl;
}

};

int main(){
    
    Customer a1("Ram",101,890000), a4,a3("Rajat",103),a2("Mohit");


// Copy Constructor 
    Customer a5(a1);

// Another Metod using assignment Operator 
    Customer a6;

    a6=a1;


    a1.display();
    a2.display();
    a3.display();
    a4.display();
    a5.display();
    a6.display();
}


