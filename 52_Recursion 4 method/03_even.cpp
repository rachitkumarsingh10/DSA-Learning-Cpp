#include <iostream>
using namespace std;

void printEven(int n) {
    if (n < 2)
        return;

    printEven(n - 1);

    if (n % 2 == 0)
        cout << n << " ";
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    printEven(n);
    return 0;
}
