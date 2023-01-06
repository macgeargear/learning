#include <iostream>
using namespace std;

void intersectionTwoSortedArray(int a[], int b[], int m, int n) {
    int prevfound = 0;    
    int i=0, j=0;
    while (i<m && j<n) {
        if (a[i] == b[j] & a[i] != prevfound) {
            cout << a[i] << " ";
            i++; j++;
            prevfound = a[j];
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }
}

int main() {
    int a[] = {1, 1, 3, 3, 3};
    int b[] = {1, 1, 1, 1, 3, 5, 7};

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    intersectionTwoSortedArray(a, b, m, n);
}