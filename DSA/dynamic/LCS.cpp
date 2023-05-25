#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    char str1[1024], str2[1024];
    int dp[1024][1024];

    for (int i=1; i<=n1; i++) {
        for (int j=1; j<=n2; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]); // case 1 and 2

                if (str1[i-1] == str2[j-1]) {
                    dp[i][j] = max(dp[i][j], dp[i-1][j-1]+1);
                }
            }
        }
    }    
    int answer = dp[n1][n2];
}