#include <iostream>
#include <math.h>

using namespace std;

void check_if_kth_bit_set(int n, int k)
{
    // using left shift
    // if (n & (1<<(k-1)))
    //     cout << "SET";
    // else
    //     cout << "NOT SET";

    // using right shift
    if (n >> (k - 1))
        cout << "SET";
    else
        cout << "NOT SET";
}

void PowerSet(string s, int s_size) {
    double pow_set_size = pow(2.0, s_size);
    int counter, j;

    for (counter=0; counter<pow_set_size; counter++) {
        for (j=0; j<s_size; j++) {
            if (counter & (1<<j)) cout << s[j];
        }
        cout<<"\n";
    }

}

int checkBit(int pattern, int arr[], int n) {
    
}



void count_bit(int n)
{
    int cnt = 0;

    while (n)
    {
        cnt += n & 1;
        n >>= 1;
    }
    cout << cnt;
}

// count bit set
void BrainKernighan(int n)
{
    int cnt = 0;
    while (n)
    {
        n = n & (n - 1);
        cnt++;
    }
    cout << cnt;
}

void PowerOfTwo(int n)
{
    if (!(n & (n - 1)))
        cout << "Yes";
    else
        cout << "No";
}

int getOneOddOccurrence(int arr[], int arr_size)
{
    // XOR of all elements gives us odd occurring elements.
    int cnt = 0;
    int x = 0;
    for (int i = 0; i < arr_size; i++)
    {
        x ^= arr[i];
    }
    return x;
}

void getTwoOddOccurrence(int arr[], int arr_size)
{
    int xor2 = 0;
    int set_bit_no;
    int i;
    int n = arr_size - 2;
    int x = 0, y = 0;

    for (i = 0; i < arr_size; i++)
        xor2 ^= arr[i];

    set_bit_no = xor2 & ~(xor2 - 1);
    cout << set_bit_no << "\n";

    for (i = 0; i < arr_size; i++)
    {
        if (arr[i] & set_bit_no)
            x ^= arr[i];
        else
            y ^= arr[i];
    }
    cout << "The two ODD elements are " << x << " & " << y << "\n";
}

int main()
{
    // check_if_kth_bit_set(75, 4);
    // count_bit(13);
    // BrainKernighan(9);
    // PowerOfTwo(5);
    // **********
    // int arr[] = {1,1,2, 2,3,3, 3,5, 5};
    // int n = 9;
    // cout<<getOneOddOccurrence(arr, n);
    // **********
    int arr[] = {4, 2, 4, 5, 2, 3, 3, 1};
    int n = 8;
    getTwoOddOccurrence(arr, n);
}

// 0100  4
// 0010  2
// 0011  3
// 1010 10
