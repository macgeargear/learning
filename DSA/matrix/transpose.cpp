#include <iostream>
using namespace std;

const int r=4, c=4;
void tranpose(int arr[r][c]) {
    for (int i=0; i<r; i++) {
        for (int j=i+1; j<c; j++) {
            swap(arr[i][j],arr[j][i]);
        }
    }
}

int main() {
    int arr[r][c] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};
    tranpose(arr);
    for (int i=0;i<4;i++) {
        for (int j=0; j<4;j++) {
            cout << arr[i][j] << " "; 
        }
        cout << "\n";
    }
}