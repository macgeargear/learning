#include <iostream>
using namespace std;

int fact(int n) {
    int res=1;
    for (int i=2; i<=n; i++) {
        res *= i;
    }
    return res;
}

int maximum_power_dividing_fac(int n, int fac) {
    int res=0, f;
    f = fact(fac); 
    for (int i=n; i<=f; i*=n) {
        res += f/i;
    }
    return res;
}

int main() {
    int n, fac;
    cin>>n>>fac;
    cout << maximum_power_dividing_fac(n, fac);
}