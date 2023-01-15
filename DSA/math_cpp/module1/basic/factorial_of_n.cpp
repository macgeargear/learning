#include <iostream>
#include <math.h>
using namespace std;

int fac(int n) {
    int res=1;
    for (int i=2; i<=n; i++) {
        res*=i;
    }
    return res;
}

int pow(int a, int b) {
    int res=1;
    while (b>0) {
        res *= a;
        b--;
    }
    return res;
}

int main() {
    int n;
    cin>>n;
    cout << pow(2,3) << "\n";
    cout << fac(10) % pow(6,4);
    
}