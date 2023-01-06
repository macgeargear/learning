#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* CreateNode(int data) {
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory Error\n";
        return NULL;
    }

    newNode->data=data;
    newNode->left=newNode->right=NULL;

    return newNode;
}

Node* InsertNode(Node* root, int data) {
    // If the tree is empty, assign new node address to root
    if (root == NULL) {
        root = CreateNode(data);
        return root;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();        

        if (temp->left) {
            q.push(temp->left);
        } else {
            temp->left = CreateNode(data);
            return root;
        }

        if (temp->right) {
            q.push(temp->right);
        } else {
            temp->right = CreateNode(data);
            return root;
        }     
    }
}
// Inorder Traversal
void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = CreateNode(10);
    root->left = CreateNode(11);
    root->left->left = CreateNode(7);
    root->right = CreateNode(9);
    root->right->left = CreateNode(15);
    root->right->right = CreateNode(8);

    cout << "Before Insertaion";
    inorder(root);
    cout <<"\n";

    root = InsertNode(root, 20);
    cout << "After Insertaion";
    inorder(root);
    cout <<"\n";

    
}


