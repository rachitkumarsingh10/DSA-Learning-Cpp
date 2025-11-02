#include <iostream>
#include <climits>  // for INT_MAX and INT_MIN
using namespace std;

int main() {
    int num;
    cout << "Enter number = ";
    cin >> num;

    int ans = 0;   // will store the reversed number
    int rem;       // to store each digit

    // Loop until all digits are processed
    while (num != 0) {
        rem = num % 10;   // extract last digit (can be negative if num is negative)
        num = num / 10;   // remove last digit

        // Check for overflow/underflow before multiplying by 10
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
            cout << "Error: Integer overflow/underflow occurred!" << endl;
            return 0; // terminate safely
        }

        ans = ans * 10 + rem;  // append digit to reversed number
    }

    cout << "The reversed number is = " << ans << endl;
    return 0;
}

