#include <iostream>
using namespace std;

// Class to represent a Complex number
class Complex {
    int real; // Real part
    int img;  // Imaginary part

public:
    // Default constructor (creates 0 + i0)
    Complex() {
        real = 0;
        img = 0;
    }

    // Parameterized constructor to set real and imaginary parts
    Complex(int r, int i) {
        real = r;
        img = i;
    }

    // Function to display a complex number
    void display() {
        cout << real << " + i" << img << "\n";
    }

    // Operator overloading for '+'
    Complex operator + (Complex &C) {
        Complex ans;             // Create a new object to store the sum
        ans.real = real + C.real; // Add real parts
        ans.img = img + C.img;    // Add imaginary parts
        return ans;               // Return the new object
    }
};

int main() {
    // Create three complex numbers
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3(1, 2);

    // Add 2 objects
    Complex sum1 = c1 + c2;
    cout << "Sum of c1 + c2 = ";
    sum1.display();  // Output: 6 + i8

    // Add 3 objects
    Complex sum2 = c1 + c2 + c3;
    cout << "Sum of c1 + c2 + c3 = ";
    sum2.display();  // Output: 7 + i10

    return 0;
}



         // Overload '+' operator to add two Complex objects
    //   Complex operator + (Complex &C) {
        // Step 1: Create a new object 'ans' to store result
    //    Complex ans;          // ans.real = 0, ans.img = 0 initially

        // Step 2: Add real parts
    //    ans.real = real + C.real; // this->real (object calling) + C.real (parameter)
        // Console explanation:
        // If c1 = 2 + i3 and c2 = 4 + i5
        // real = 2, C.real = 4
        // ans.real = 2 + 4 = 6

        // Step 3: Add imaginary parts
    //    ans.img = img + C.img;    // this->img + C.img
        // Console explanation:
        // img = 3, C.img = 5
        // ans.img = 3 + 5 = 8

        // Step 4: Return the new object
    //    return ans;
        // After return, sum1 = 6 + i8 (if called as sum1 = c1 + c2)
    //}