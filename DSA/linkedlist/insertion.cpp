#include <iostream>

struct Node
{
    int value;
    Node *next;
};

Node *createNode(int newValue, Node *NextNode)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = newValue;
    newNode->next = NextNode;
    return newNode;
}

// insert head
Node *insertNode(int newItem, Node *root)
{
    Node *newNode = createNode(newItem, root);
    return newNode;
}

int main()
{
    // Node *a = createNode(2, NULL);
    // Node *b = createNode(4, a);
    // Node *c = createNode(5, b);
    // Node *d = createNode(2, c);
    // Node *head = d;
    Node *head = insertNode(1, NULL);
    head = insertNode(2, head);
    head = insertNode(4, head);
    head = insertNode(67, head);
    head = insertNode(2, head);

    while (head != NULL)
    {
        // (*head).value;
        int value = head->value; // *address -> value of address
        printf("cur head = %p, value = %d\n", head, value);
        head = head->next;
    }

    return 0;
}
