#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

// insert head of circular-doubly-linkedlist
Node* insertHead(Node* head, int data) {
    Node *temp = new Node(data);
    if (head == NULL) {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    
    temp->prev = head->prev;
    temp->next = head;
    head->prev->next = temp;
    head->prev = temp;
    return temp;

}


int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    a->prev = d;

    b->next = c;
    b->prev = a;

    c->next = d;
    c->prev = b;

    d->next = a;
    d->prev = c;

    
}