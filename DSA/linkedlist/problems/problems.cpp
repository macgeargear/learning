#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node (int x) {
        data = x;
        next = NULL;
    }
};


// TODO: insert in sorted linkedlist
Node* sortedInsert(Node* head, int x) {
    Node* temp = new Node(x);
    if (!head) {
        return temp;
    }
    if (x < head->data) {
        temp->next = head;
        return temp;
    }
    Node* curr = head;
    while (curr->next && curr->next->data < x) {
        if (curr->next->data > x) {
            curr = curr->next;
        }     
    }

    temp->next = curr->next;
    curr->next = temp;
    return head;

}

// TODO: middle of a linkedlist
Node* middleOfLinkedList(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

/// Nth node from end of linked list
// TODO: Method 1 (Using Length of Linked list)
Node* NthNodeFromEnd_1(Node* head, int n) {
    int cnt=0;
    for(Node* curr=head; curr; curr=curr->next) cnt++;
    Node* curr = head;
    if (cnt < n) return NULL;
    for (int i=0; i<cnt-n+1; i++) {
        curr = curr->next;
    }
    return curr;
}

// TODO: Method 2 (Using two Pointer)
/*
    1. move 'fast' n position ahead
    2. start 'second' pointer from head
    3. move both pointer at same speed. return 'second' when 'first' reaches NULL
*/
Node* NthNodeFromEnd_2(Node* head, int n) {
    if (!head) return NULL;
    Node* first = head;
    for (int i=0; i<n; i++) {
        if (!first) return NULL;
        first = first->next;
    }
    Node* second = head;
    while (first) {
        first = first->next;
        second = second->next;
    }
    return second;
}

// TODO: reverse (iterative)
Node* reverseNodeLoop(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    while (curr) {
        Node* next = curr->next;        
        curr->next = prev;
        prev = curr;
        curr = next;
    } 
    return prev; // prev is new head
}

// TODO: reverse (recursive)
Node* reverseRecursive_1(Node* head) {
    if (!head || !head->next) return head;
    Node* rest_head = reverseRecursive_1(head->next);
    Node* rest_tail = head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
}

// TODO: Must revise !!!!!
/*
: Note 
     
1<-2<-3<-4

re(1) = 4
  |_ rest_head = re(2) = 4
                 |_ rest_head = re(3) = 4
                                |_ rest_head = re(4) = 4
                                                |_ return 4
                                |_ rest_tail = 4
                                |_ 4->3;
                                |_ 3->null
                                return 4
                 |_ rest_tail = 3
                 |_ 3->2
                 |_ 2->null
                 return 4

  |_ rest_tail = 2
  |_ 2->1
  return 4

*/

Node* reverseRecursive_2(Node* curr, Node* prev) {
    if (!curr) return prev;
    Node* next = curr->next;
    curr->next = prev;
    return reverseRecursive_2(next, curr);
}

/*
: Note

NULL<-1<-2<-3
re(1, NULL)
  |_ next = 2
  |_ 1->NULL
  return re(2, 1)
            |_ next = 3
            |_ 2->1
            return re(3, 2)
                    |_ next = NULL
                    |_ 3->2
                    return re(NULL, 3)
                            |_ return 3

*/

// TODO: remove duplicate
// .     p              pn,          c 
// input:10->10->20->20->30->30->30
// output: 10->20->30
// my sol
void removeDuplicate(Node* head) {
    if (!head || !head->next) return;
    Node* curr = head->next;
    Node* prev = head;
    while (curr) {
        if (curr->data == prev->data) {
            curr = curr->next;
        } else {
            prev->next = curr;
            prev = curr;
            curr = curr->next;   
        }
    }
    prev->next = NULL;
}
// geeks sol
void removeDups(Node* head) {
    Node* curr = head;
    while (curr && curr->next) {
        if (curr->data == curr->next->data) {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        } else {
            curr = curr->next;
        }
    }
}

// TODO: Reverse linked list in groups of size k

// TODO: Detect loop

// TODO: Detect loop using floyd cycle detection

// TODO: Detect and remove loop in linkedlist

// TODO: Delete node with only pointer given to it

// TODO: Segregate Even and Odd Nodes

// TODO: Intersection of two linked list

// TODO: Pairwise Swap Nodes of linked list

// TODO: Clone a linked list with random pointer

// TODO: LRU Cache Design

// TODO: Merge two sorted linked list

// TODO: Prlindrome linked list






// ------------------------------------------------------------------
// ------------------------------------------------------------------
// -------------------xxxxxxxxxxxxxxxxxxxxxxxxxxx--------------------
// -------------------xxxxxxxxxxxxxxxxxxxxxxxxxxx--------------------
// -------------------xxxxxxxxxxxxxxxxxxxxxxxxxxx--------------------
// -------------------xxxxxxxxxxxxxxxxxxxxxxxxxxx--------------------
// -------------------xxxxxxxxxxxxxxxxxxxxxxxxxxx--------------------
// -------------------xxxxxxxxxxxxxxxxxxxxxxxxxxx--------------------
// ------------------------------------------------------------------
// ------------------------------------------------------------------
void printList(Node* head) {
    while (head) {
        cout<<head->data<<" ";
        head = head->next;
    }
}

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

int main() {
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 10);
    head = insertEnd(head, 20); 
    head = insertEnd(head, 20); 
    head = insertEnd(head, 30); 
    head = insertEnd(head, 30); 
    head = insertEnd(head, 30); 
    removeDuplicate(head);
    printList(head);
    return 0;
}
