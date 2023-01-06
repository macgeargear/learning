#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int h){
    
    int n1=m-l+1, n2=h-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];    
}

void printArr(int a[], int n) {
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
}

void mergeSort(int a[], int l, int r) {
    if (l<r) {
        int mid = l + (r-l)/2;
        mergeSort(a, l, mid);
        mergeSort(a, mid+1, r);
        merge(a, l, mid, r);
    }
}

int main() {
    int a[] = {10, 5, 30, 15, 7};
    int l=0, r=4;
    int n = sizeof(a) / sizeof(a[0]);
    mergeSort(a, l, r);
    printArr(a,n);
}