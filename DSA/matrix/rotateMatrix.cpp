#include <iostream>
using namespace std;
const int r=4, c=4;

void transpose(int arr[r][c]) {
    for (int i=0; i<r; i++) {
        for (int j=i+1; j<c; j++) {
             swap(arr[i][j], arr[j][i]);
        }
    }
}

void rotate(int arr[r][c]) {
    transpose(arr);
    for (int i=0;i<4;i++) {
        for (int j=0; j<4;j++) {
            cout << arr[i][j] << " "; 
        }
        cout << "\n";
    }
    cout <<"\n";
    // ---------------------------------
    for (int j=0; j<c; j++) {
        int low=0, high=c-1;
        while (low<high) {
            swap(arr[low][j], arr[high][j]);
            low++;
            high--;
        }
    }
}


int main() {
     int arr[r][c] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};
    rotate(arr);
    for (int i=0;i<4;i++) {
        for (int j=0; j<4;j++) {
            cout << arr[i][j] << " "; 
        }
        cout << "\n";
    }
}