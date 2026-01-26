#include<iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 1, 3, 6, 22, 221, 112};

    // Compute size of array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Reverse the array
    for(int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }

    // Print reversed array
    for(int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}
