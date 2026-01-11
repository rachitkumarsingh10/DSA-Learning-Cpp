#include<iostream>
using namespace std;

class Customer{



    string name;
    int acc_num,balance;
    static int total_Customer;
    static int total_balance;
   

    public:  

    Customer(string name, int acc_num, int balance){
        this->name=name;
        this->acc_num=acc_num;
        this->balance=balance;
        total_Customer +=1;
        total_balance+=balance;
  
    }

    void display(){
        cout<<name<<" "<<acc_num<<" " <<balance<<" "<< total_Customer<<endl;

    }
    void display_total(){
        cout<<total_Customer<<endl;
    }
//Static Member Function - class Function
//    It does not access of name balance and acc 
    static void accessStatic(){
        cout<<"Total No of Customer"<<total_Customer<<endl;
        cout<<"Total balance"<<total_balance<<endl;
    }


//Deposit = add money
    void deposit(int amount){

        if(amount>0){
        balance+=amount;
        total_balance+=amount;
        }
        else{
            cout<<"Invalid Amount ";
        }
    }

    void withdraw(int amount){

        if(amount<=balance && amount>0){
        balance-=amount;
        total_balance-=amount; 
        }
    }
};

int Customer:: total_Customer=0;
int Customer:: total_balance=0;

int main(){
   
    Customer a1("Rohit",1,1000);
    Customer a2("Mohit",2,1000);
    Customer a3("Mohan",3,2000);

    // a1.display();
    // a1.balance+=-10;
    // a1.display();

    a1.deposit(-10);

    
}