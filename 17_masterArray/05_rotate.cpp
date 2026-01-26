#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {22, 43, 5, 6, 7, 78};
    int x;

    cout << "Rotate By: ";
    cin >> x;

    int n = arr.size();
    x = x % n;  // in case x > n

    vector<int> rotate(n);

    // Fill rotated vector
    for(int i = 0; i < n; i++) {
        rotate[(i + x) % n] = arr[i];  // right rotation
    }

    // Print rotated vector
    for(int i = 0; i < n; i++) {
        cout << rotate[i] << " ";
    }

    return 0;
}



//   vector<int> arr = {22, 43, 5, 6, 7, 78};
//     int x;

//     cout << "Rotate By: ";
//     cin >> x;

//     int n = arr.size();
//     x = x % n;   // handle x > n

//     // RIGHT rotate by x
//     rotate(arr.begin(), arr.end() - x, arr.end());

//     for (int val : arr) {
//         cout << val << " ";
//     }

//     return 0;
