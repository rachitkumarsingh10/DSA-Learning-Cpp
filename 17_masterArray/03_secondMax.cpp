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
