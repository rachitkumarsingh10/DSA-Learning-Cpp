#include <iostream>
using namespace std;

/*
Traditional recursive method (O(b)):

int power(int n, int b) {
    if (b == 0)
        return 1;
    return n * power(n, b - 1);
}
*/

int power(int n, int b) {
    if (b == 0)
        return 1;

    int half = power(n, b / 2);

    if (b % 2 == 0)
        return half * half;
    else
        return n * half * half;
}

int main() {
    int n, b;
    cin >> n >> b;

    cout << power(n, b);
    return 0;
}
