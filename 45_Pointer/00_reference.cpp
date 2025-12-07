#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &x = a; // x is reference to a

    cout << "a = " << a << ", x = " << x << endl;

    x = 50;     // modifies a
    cout << "a = " << a << ", x = " << x << endl;

    return 0;
}
