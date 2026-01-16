#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int key, int index, int end) {

    // out of range
    if (index > end)
        return false;

    // key found
    if (arr[index] == key)
        return true;

    // move forward
    return LinearSearch(arr, key, index + 1, end);
}

int main() {
    int arr[] = {4, 3, 44, 25, 333, 33, 343};
    int key;

    // find array length
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the searching element: ";
    cin >> key;

    // search from 0 to n-1
    cout << "The key is " << LinearSearch(arr, key, 0, n - 1);

    return 0;
}
