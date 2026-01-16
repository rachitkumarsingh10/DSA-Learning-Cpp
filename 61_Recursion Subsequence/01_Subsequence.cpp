#include <iostream>
#include <vector>
using namespace std;

void Sub(int arr[], int index, int n,
         vector<vector<int>> &ans,
         vector<int> temp) {

    // base case
    if (index == n) {
        ans.push_back(temp);
        return;
    }

    // exclude
    Sub(arr, index + 1, n, ans, temp);

    // include
    temp.push_back(arr[index]);
    Sub(arr, index + 1, n, ans, temp);
}

int main() {
    int arr[] = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;

    Sub(arr, 0, 3, ans, temp);

    // print using for loops
    for (int i = 0; i < ans.size(); i++) {
        cout << "{ ";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
