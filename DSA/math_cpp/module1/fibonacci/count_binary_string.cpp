#include <iostream>
using namespace std;

// A binary string would end with:
// 1) 00
// 2) 01 or 10

int count_binary_strings_with_no_two_consecutive_1(int n) {
    int a=1, b=2, c;
    for (int i=2; i<=n; i++) {
        c = a+b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n=4;
    cout<<count_binary_strings_with_no_two_consecutive_1(n);
    return 0;
}