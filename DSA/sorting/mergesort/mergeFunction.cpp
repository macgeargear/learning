#include <iostream>
using namespace std;

void merge(int a[], int low, int mid, int high) {
    int n1 = mid-low+1; int n2 = high-mid;
    int left[n1], right[n2];
    // copy seperated array into left[] and right[];
    for (int i=0; i<n1; i++) {
        left[i] = a[i];
    }
    for (int i=0; i<n2; i++) {
        right[i] = a[i+mid+1];
    }
    int i=0, j=0, k=low;
    while (i<n1 && j<n2) {
        if (left[i] < right[j]) {
            a[k] = left[i];
            i++; k++;
        } else {
            a[k] = right[j];
            k++; j++;
        }
    }

    while (i<n1) {
        a[k] = left[i];
        k++; i++;
    }

    while (j<n2) {
        a[k] = right[j];
        k++; j++;
    }

}

void printArr(int a[], int n) {
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int a[] = {10, 20, 40, 20, 30};
    int n = sizeof(a) / sizeof(a[0]);
    merge(a, 0, n/2, n-1);
    printArr(a, n);
}