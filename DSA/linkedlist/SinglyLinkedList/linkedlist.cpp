#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node (int x) {
        data = x;
        next = NULL;
    }
};

// iterative
// void printList(Node *head) {
//     while (head) {
//         cout << head->data <<" ";
//         head = head->next;
//     }
// }

// recursive
void printList(Node* head) {
    if (!head) {
        return;
    }
    cout << (head->data) << " ";
    printList(head->next);
}

// Insert Begin
Node* insertBegin(Node *head, int data) {
    Node* temp = new Node(data);
    if (!head) {
        return temp;
    }
    temp->next = head;
    return temp;
}

// Insert End
Node* insertEnd(Node *head, int data) {
    Node* temp = new Node(data);
    Node* cur = head;
    if (!head) {
        return temp;
    }
    while (cur->next) {
        cur = cur->next;
    }
    cur->next = temp;
    return head;
}

//Delete first
Node* delHead(Node* head) {
    if (!head) {
        return NULL;
    } else {
        Node* temp = head->next;
        delete head;
        return temp;
    }
}

//Delete last
Node* delLast(Node* head) {
    if (!head) return NULL;
    if (!head->next) {
        delete head;
        return NULL;
    }

    Node* cur = head;
    while (cur->next->next) {
        cur = cur->next;
    }
    delete cur->next;
    cur->next = NULL;
    return head;
}

int searchIerative(Node* head, int x) {
    int ind = 1;
    if (!head) {
        return -1;
    }

    while (head) {
        if (head->data == x) {
            return ind;
        }
        head = head->next;
        ind++;
    }
    return -1;
}

int searchRecursive(Node* head, int x, int index) {
    if (!head) return -1;
    if (head->data == x) return index;
    return searchRecursive(head->next, x, index+1);
}

int main() {
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30); 
    head = insertEnd(head, 40); 
    head = insertEnd(head, 50); 
    head = insertEnd(head, 60); 
    printList(head);
    cout<<"\n";
    cout<<searchIerative(head, 30)<<"\n";
    cout<<searchRecursive(head, 60, 1);
    return 0;
}