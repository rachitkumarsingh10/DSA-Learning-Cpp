#include <iostream>
using namespace std;

void reverseStr(string &str, int start, int end) {

    // stop condition
    if (start >= end)
        return;

    // swap
    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    // move inward
    reverseStr(str, start + 1, end - 1);
}

int main() {
    string str = "naman";

    // reverse full string
    reverseStr(str, 0, str.length() - 1);

    cout << str;
    return 0;
}
