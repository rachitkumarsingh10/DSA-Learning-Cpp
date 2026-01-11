#include <iostream>
using namespace std;

void print(int curr,int n) {
    if (curr  > n)
        return;
    cout << curr << " ";
    print(curr+1,n);
    
}

int main() {


    print(1,10);
    return 0;
}
