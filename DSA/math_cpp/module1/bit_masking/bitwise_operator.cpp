#include <iostream>
using namespace std;

int main() {
    int x=3, y=6;
    cout << (x&y) << "\n"; // AND
    cout << (x|y) << "\n"; // OR
    cout << (x^y) << "\n"; // XOR
    cout << (x<<1) << "\n"; // left shift
}