#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    int i = 0, j = numbers.size() - 1;

    while(i < j) {
        int sum = numbers[i] + numbers[j];

        if(sum == target) {
            cout << i + 1 << " " << j + 1 << endl;   // 1-based index
            return 0;
        }
        else if(sum < target) {
            i++;
        }
        else {
            j--;
        }
    }

    return 0;
}

