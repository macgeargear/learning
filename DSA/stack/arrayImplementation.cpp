#include <iostream>
using namespace std;

struct MyStack {
    int *arr;
    int cab;
    int top;
    MyStack(int c) {
        cab = c;
        arr = new int[c];
        top = -1;
    }
    void push(int x) {
        top++;
        arr[top] = x;
    }
    int pop() {
        int res = arr[top];
        top--;
        return res;
    }
    int peak() {
        return arr[top];
    }
    int size() {
        return top+1;
    }
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    MyStack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<"\n";
    cout<<s.size()<<"\n";
    cout<<s.peak()<<"\n";
}





