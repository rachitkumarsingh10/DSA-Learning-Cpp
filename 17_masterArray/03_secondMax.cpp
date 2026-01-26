#include <iostream>
#include <climits>
#include <algorithm> 

using namespace std;

int main()
{
    int arr[6] = {2, 6, 3, 8, 5, 1};
    int firstmax = INT_MIN;
    int secmax = INT_MIN;

    // Find maximum
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > firstmax)
        {
            firstmax = arr[i];
        }
    }

    // Find second maximum
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] != firstmax)
        {
            secmax = max(secmax, arr[i]);
        }
    }

    cout << "Maximum: " << firstmax << endl;
    cout << "Second Maximum: " << secmax << endl;

    return 0;
}





// int main() {
//     int arr[] = {10, 5, 20, 8, 20};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int max1 = INT_MIN, max2 = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > max1) {
//             max2 = max1;
//             max1 = arr[i];
//         } else if (arr[i] > max2 && arr[i] != max1) {
//             max2 = arr[i];
//         }
//     }

//     if (max2 == INT_MIN)
//         cout << "No second maximum element";
//     else
//         cout << "Second maximum element is: " << max2;

//     return 0;
// }
