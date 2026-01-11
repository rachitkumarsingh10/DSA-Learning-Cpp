#include <iostream>
using namespace std;

void printEven(int n) {
    if (n <= 0)
        return;

    printEven(n - 2);
    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Ensure starting from the largest even number ≤ n
    if (n % 2 != 0)
        n--;

    printEven(n);
    return 0;
}
