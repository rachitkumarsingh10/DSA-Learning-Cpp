// ====================================================
// 1️⃣ FIBONACCI NUMBER PROGRAM IN C++
// ====================================================
// 🔹 The Fibonacci sequence is a series of numbers
//    where each term is the sum of the previous two.
//
// 🔸 Example Series → 0, 1, 1, 2, 3, 5, 8, 13...
//
// ====================================================
// 🧠 PROGRAM GOAL
// ====================================================
// Input: A number n
// Output: The nth Fibonacci number
// ====================================================

#include <iostream>
using namespace std;

int main() {

    // ====================================================
    // 🔹 Variable Declaration
    // ====================================================
    int n, f1 = 0, f2 = 1, fibb;  
    // f1 → First Fibonacci number (0)
    // f2 → Second Fibonacci number (1)
    // fibb → To store next Fibonacci number

    cout << "Enter The Number = ";
    cin >> n;

    // ====================================================
    // 🔹 Base Conditions
    // ====================================================
    // If user enters 0 → Output 0
    if (n == 0) {
        cout << 0;
        return 0;
    }

    // If user enters 1 → Output 1
    if (n == 1) {
        cout << 1;
        return 0;
    }

    // ====================================================
    // 🔹 Loop to Calculate Fibonacci Number
    // ====================================================
    // Starts from 3rd term and runs till nth term
    for (int i = 3; i <= n; i++) {
        fibb = f1 + f2;  // Next term = sum of previous two
        f1 = f2;         // Shift previous term forward
        f2 = fibb;       // Store new term for next iteration
    }

    // ====================================================
    // 🔹 Output the nth Fibonacci Number
    // ====================================================
    cout << "Fibonacci number at position " << n << " is: " << fibb;

    return 0;
}

// ====================================================
// 🧩 SAMPLE OUTPUTS
// ====================================================
// Input: 5
// Output: Fibonacci number at position 5 is: 3
//
// Input: 8
// Output: Fibonacci number at position 8 is: 13
// ====================================================
//
// ✅ SUMMARY:
// f(n) = f(n-1) + f(n-2)
// 0, 1, 1, 2, 3, 5, 8, 13...
// ====================================================


