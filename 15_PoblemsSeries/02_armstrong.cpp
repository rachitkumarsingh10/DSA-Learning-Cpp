#include <iostream>
#include <cmath>
using namespace std;

int counting(int value) {
    if (value == 0)
        return 1;
    return log10(abs(value)) + 1;
}

bool armstrong(int num, int digit) {
    int rem, arms = 0;
    int temp = num;
    while (num) {
        rem = num % 10;
        arms = arms + round(pow(rem, digit));  // ✅ correct formula
        num = num / 10;
    }
    return arms == temp;  // ✅ simpler return
}

int main() {
    int value;
    cout << "Enter a number: ";
    cin >> value;

    int digit = counting(value);

    if (armstrong(value, digit))
        cout << value << " is an Armstrong number.";
    else
        cout << value << " is NOT an Armstrong number.";

    return 0;
}
