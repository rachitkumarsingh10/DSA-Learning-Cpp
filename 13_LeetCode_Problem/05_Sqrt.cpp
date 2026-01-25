#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int i = 0;
    while (i <= x / (i == 0 ? 1 : i)) {
        i++;
    }

    cout << i - 1;
    return 0;
}


    // int i = 0;
    // while (true) {
    //     if (i == 0) {
    //         if (0 > x / 1) break;
    //     } else {
    //         if (i > x / i) break;
    //     }
    //     i++;
    // }