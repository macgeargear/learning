#include <iostream>
using namespace std;

void unionOfTwoSortedArray(int a[], int b[], int m, int n) {
    int i=0, j=0, prev=0;
    while (i<m && j<n) {
        if ( a[i] != prev && b[i] != prev) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                prev = a[i];
                i++; j++;
            } else if (a[i] > b[j]) {
                cout << b[j] << " ";
                prev = b[j];
                j++;
            } else {
                cout << a[i] << " ";
                prev = a[i];
                i++;
            }
        } else {
            i++; j++;
        }
    }
    
    while (i<m) {
        if (a[i] != prev) {
            cout << a[i] << " ";
            prev = a[i];
        }
        i++;
    }

    while (j<n) {
        if (b[j] != prev) {
            cout << b[j] << " ";
        }
        j++;
    }
}

int main() {
    int a[]={2,3,3,3,4,4};
    int b[]={4,4};
    
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);

    unionOfTwoSortedArray(a,b,m,n);
}