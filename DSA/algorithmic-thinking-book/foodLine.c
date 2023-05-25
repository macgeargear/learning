#include <stdio.h>
#define MAX_LINES 100

int shortLineIndex(int arr[], int n) {
    int shortest = 0;
    for (int i=0; i<n; i++) {
        if (arr[shortest] > arr[i]) {
            shortest = i;
       }
    }
    return shortest; 
}

void solve(int lines[], int n, int m) {
    for (int i=0; i<m; i++) {
        int ind = shortLineIndex(lines, n);
        printf("%d", lines[ind]);
        lines[ind]++;
    }
}

int main() {
    int lines[MAX_LINES];
    int m,n;
    scanf("%d%d", &n, &m);
    for (int i=0; i<n; i++) {
        scanf("%d", &lines[i]);
    }
    solve(lines, n, m);
    return 0;
}