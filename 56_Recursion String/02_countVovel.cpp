#include <iostream>
using namespace std;

int countVal(string str, int index) {

    // base case
    if (index < 0)
        return 0;

    // if vowel
    if (str[index] == 'a' || str[index] == 'e' ||
        str[index] == 'i' || str[index] == 'o' ||
        str[index] == 'u')
        return 1 + countVal(str, index - 1);

    // if not vowel
    return countVal(str, index - 1);
}

int main() {
    string str = "naman";

    // start from last index
    cout << countVal(str, str.length() - 1);

    return 0;
}
