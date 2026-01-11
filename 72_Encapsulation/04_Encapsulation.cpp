#include <iostream>
using namespace std;

class Customer
{

    string name;
    int balance;
    int age;

public:
    Customer(string name, int balance, int age)
    {
        this->name = name;
        this->balance = balance;
        this->age = age;
    }
    void updateAge(int age)
    {
        if (age > 18 && age < 100)
        {
            this->age = age;
        }
        else
        {
            cout << "invalid Age";
        }
    }

    void display()
    {
        cout << name << " " << balance << " Age =" << age<<endl;
    }
};

int main()
{

    Customer a1("Rohit", 1000, 34);
    a1.display();
    a1.updateAge(13);
}