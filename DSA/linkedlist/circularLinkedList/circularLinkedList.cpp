#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

// traverseal circular linked list
void traverseList(Node* head) {
    if (head == NULL) return;
    cout << (head->data)<<" ";
    for (Node *p = head->next; p != head; p=p->next) {
        cout << (p->data) << " ";
    }
}

// insert begin O(n)
Node* insertBegin(Node* head, int data) {
    Node* temp = new Node(data);
    if (!head) {
        temp->next = temp;
        return temp;
    } else {
        Node* p = head;
        while (p->next != head) {
            p = p->next;
        }
        p->next = temp;
        temp->next = head;
    } 
    return temp;
}

// insert begin O(1)
Node* insertBeginFast(Node* head, int data) {
    Node *temp = new Node(data);
    if (!head) {
        temp->next = temp;
        return temp;
    } else {
        // insert begin
        temp->next = head->next;
        head->next = temp;

        // swap head and temp
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;

    }
}

// insertEnd O(n)
Node* insertEnd(Node* head, int data) {
    Node* temp = new Node(data);
    if (!head) {
        temp->next = temp;
        return temp;
    }
    Node* curr = head;

    while (curr->next != head) {
        curr = curr->next;
    }

    temp->next = head;    
    curr->next = temp;
    return head;
}

// insertEnd O(1)
Node* insertEndFast(Node* head, int data) {
    Node* temp = new Node(data);
    if (!head) {
        temp->next = temp;
        return temp;
    }
    temp->next = head->next;
    head->next = temp;
    int t = temp->data;
    temp->data = head->data;
    head->data = t;
    return temp;
}

// deleteHead O(n)
Node* deleteHead(Node* head) {
    if (!head) return NULL;
    if (!head->next) {
        delete head;
        return NULL;
    }
    Node* curr = head;
    while (curr->next != head) {
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;
    return curr->next;
}

// deleteHead O(1)
Node* deleteHeadFast(Node* head) {
    if (!head) return NULL;    
    if (head->next == head) {
        delete head;
        return NULL;
    }

    head->data = head->next->data;
    // for other languages this line is not require bc. in C++ must take care of memory deallocation!
    Node* temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}

// Delete Kth Node
Node* deleteKthNode(Node* head, int k) {
    // n <= len(head)
    if (!head) return NULL;
    if (k==1) return deleteHeadFast(head);
    // K != 1
    Node* curr = head;
    for (int i=0; i<k-2; i++) {
        curr = curr->next;
    }
    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
    return head;

    
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(20);
    head->next->next->next->next = head;
    // traverseList(head);
    return 0;
}
