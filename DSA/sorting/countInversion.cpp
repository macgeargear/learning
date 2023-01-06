#include <iostream>
using namespace std;


int countAndMerge(int arr[], int l, int m, int r) {
    int n1 = m-l+1, n2 = r-m;
    int left[n1], right[n2];
    for (int i=0; i<n1; i++) {left[i] = arr[l+i];}
    for (int i=0; i<n1; i++) {right[i] = arr[m+1+i];}
    int res=0, i=0, j=0, k=l;
    while (i<n1 && j<n2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
            res += n1 - i;
        }
    }
    while (i<n1) arr[k++] = left[i++];
    while (j<n2) arr[k++] = right[j++];
    return res;
}

int countInv(int arr[], int l, int r) {
    int res=0;
    if (l<r) {
        int m = l + (r-l)/2;
        res += countInv(arr, l, m);
        res += countInv(arr, m+1, r);
        res += countAndMerge(arr, l, m, r);
    }
    return res;
}


int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int arr2[] = {10, 20, 30, 40};
    int arr3[] = {40, 30, 20, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countInv(arr, 0, 4) << "\n";
    cout << countInv(arr2, 0, 3) << "\n";
    cout << countInv(arr3, 0, 3) << "\n";
}