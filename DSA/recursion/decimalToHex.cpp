#include <iostream>
using namespace std;

void decToHex(int n) {
    int r;
    if (n>0) {
        r = n%16;
        decToHex(n/16);
        switch(r) {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default:
                printf("%d", r);
        }
    }
}

int main() {
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    decToHex(a);
}

/*
    16|160 0
     0|10 
        
*/