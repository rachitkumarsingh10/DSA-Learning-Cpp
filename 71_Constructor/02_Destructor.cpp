#include<iostream>
using namespace std;

class Customer
{
private:
    string name;
  
    int *balance;

public:

Customer(){
    name="Not Given";
    cout<<"Constructor is "<< name<<endl;
    
}
Customer(string name,  int bal){
    this->name=name;
    balance=new int ;
    *balance=bal;
    cout<<"Constructor is "<< name<<endl;
}

// Destructor - no return type , - By default
~ Customer(){
    cout<<"Destructor is "<< name<<endl;
    delete balance;

}

};

int main(){
    Customer a1("1",1000), a2("2",2000);
    // order of constructor , hint - dependency
    
    // Dinamic Memory allocation
    Customer *a4= new Customer;
    delete(a4);


}