#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int d) {
        data = d;
        next = prev = NULL;
    }
};

// insertBegin
Node* insertBegin(Node* head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    if (head) {
        head->prev = temp;
    }
    return temp;
}

// reverse a Doubly Linked List
Node* reverseDoublyLinkedList(Node* head) {
    if (head == NULL || head->next == NULL) return head;
    Node *prev = NULL;
    Node *curr = head;
    while (curr) {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}

// Delete Head
Node* deleteHead(Node* head) {
    if (head == NULL) return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    } else {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

}

// Delete Last
Node* deletelast(Node* head) {
    if (head == NULL) return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* curr = head;
    while (curr->next) {
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
}


// Insert End
Node* insertEnd(Node* head, int data) {
    Node* temp = new Node(data);
    if (!head) return temp;
    if (head->next == NULL) {
        temp->prev = head;
        head->next = temp;
        return head;
    }
    Node* curr = head;
    while (curr->next) {
        curr = curr->next;
    }
    temp->prev = curr;
    curr->next = temp;
    return head;
}


int main() {
    Node* a = new Node(40);
    a = insertBegin(a, 30);
    a = insertBegin(a, 20);
    a = insertBegin(a, 10);

}