#include<iostream>
using namespace std;

class Customer{



    string name;
    int acc_num,balance;
    public:  

    Customer(string name, int acc_num, int balance){
        this->name=name;
        this->acc_num=acc_num;
        this->balance=balance;

  
    }

    void display(){
        cout<<name<<" "<<acc_num<<" " <<balance<<" "<<endl;

    }


//Deposit = add money
    void deposit(int amount){

        if(amount>0){
        balance+=amount;
        cout<<"Transaction Successful"<<endl;
        cout<<name<<" "<<acc_num<<" " <<balance<<" "<<endl;
        }
        else{
            cout<<"Transaction Cancelled "<<endl;
             cout<<name<<" "<<acc_num<<" " <<balance<<" "<<endl;
        }
    }

    void withdraw(int amount){

        if(amount<=balance && amount>0){
        balance-=amount; 
        }
    }
};



int main(){
   
    Customer a1("Rohit",1,1000);
    Customer a2("Mohit",2,1000);
    Customer a3("Mohan",3,2000);
    a1.display();
    a1.deposit(-10);
    
    a1.deposit(100);
    

    
}