#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number = ";
    cin >> num;

    if(num < 1) {
        return 0;   // immediately exit if number < 1
    }

    while(num != 1) {
        if(num % 2 == 1) {
            return 0;   // exit if number is odd (not divisible by 2)
        }
        num = num / 2;  // keep dividing by 2
    }

    return 1;  // reached if number becomes 1
}
