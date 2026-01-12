#include <iostream>
using namespace std;

void lowerStr(string &str, int index) {

    // stop condition
    if (index < 0)
        return;

    // convert to uppercase
    str[index] = str[index] - 'a' + 'A';

    // move left
    lowerStr(str, index - 1);
}

int main() {
    string str = "naman";

    // start from last index
    lowerStr(str, str.length() - 1);

    cout << str;
    return 0;
}

