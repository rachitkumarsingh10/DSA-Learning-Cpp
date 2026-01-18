#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "HUHUHU\n";
    }
};

class Dog : public Animal {   // ✅ Inheritance
public:
    void speak() {            // ✅ Override
        cout << "BARK BARK\n";
    }

    void roti() {
        cout << "Helloo\n";
    }
};

int main() {
    Animal *p;
    p = new Dog();

    p->speak();   // ✅ Allowed (virtual function)

    // p->roti();  // ❌ NOT allowed (Animal doesn't know roti)

    return 0;
}




// Animal *p;          // pointer type = Animal*
// p = new Dog();      // object type  = Dog

// p->speak();
// ↓
// Animal has virtual speak()
// ↓
// Dog has overridden speak()
// ↓
// Dog's speak() is called
// ↓
// Output: BARK BARK
