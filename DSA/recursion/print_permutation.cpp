#include <iostream>
using namespace std;

void swap(string x, string y)
{
    string tmp = x;
    x = y;
    y = tmp;
}

void printPermutation(string s, int i = 0)
{
    if (i == s.length() - 1)
    {
        cout << s << "\n";
        return;
    }
    for (int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);
        printPermutation(s, i + 1);
        swap(s[i], s[j]);
    }
}

int main()
{
    string s = "abc";
    printPermutation(s);
}
