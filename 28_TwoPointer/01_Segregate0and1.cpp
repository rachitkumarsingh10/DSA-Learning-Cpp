// User function template for C++
#include <iostream>
#include <vector>
#include <algorithm>  // for swap

using namespace std;

class Solution {
public:
    void segregate0and1(vector<int> &arr) {

        int start = 0;
        int end = arr.size() - 1;

        while (start < end) {

            if (arr[start] == 0) {
                start++;
            }
            else {
                if (arr[end] == 0) {
                    swap(arr[start], arr[end]);
                    start++;
                    end--;
                }
                else {
                    end--;
                }
            }
        }
    }
};
int main() {
    vector<int> arr = {0, 1, 1, 0, 1, 0};
    
    Solution s;
    s.segregate0and1(arr);

    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}