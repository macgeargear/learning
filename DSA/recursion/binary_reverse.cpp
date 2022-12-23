#include <iostream>
using namespace std;

void bitReverse(int n) {
    if (n == 0) return;
    bitReverse(n/2);
    cout<<n%2;
}

int main() {
    bitReverse(25);
}