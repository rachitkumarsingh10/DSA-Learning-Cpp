#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int key, int start, int end) {

    // out of range
    if (start > end)
        return false;

    // middle index
    int mid = (start + end) / 2;

    // key found
    if (arr[mid] == key)
        return true;

    // search right half
    if (arr[mid] < key)
        return BinarySearch(arr, key, mid + 1, end);

    // search left half
    return BinarySearch(arr, key, start, mid - 1);
}

int main() {
    // sorted array
    int arr[] = {3, 4, 25, 33, 44, 333, 343};
    int key;

    // array length
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the searching element: ";
    cin >> key;

    // binary search
    cout << "The key is " << BinarySearch(arr, key, 0, n - 1);

    return 0;
}
