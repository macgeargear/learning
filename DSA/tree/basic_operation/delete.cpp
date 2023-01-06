#include<iostream>
using namespace std;

typedef struct Node {
    int key;
    Node *left, *right;
};

Node* newNode(int key) {
    Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(Node* temp) {
    if (!temp) return;
    inorder(temp->left);
    cout<<temp->key;
    inorder(temp->right);
}

// delete deepest node in tree
void delteDeepest(Node* root, Node* d_node) {
    queue<Node*> q;
    q.push(root);

    Node* temp;
    while (q) {
        temp = q.front();
        q.pop();

        if (temp == d_node) {
            temp = NULL;
            delete (d_node);
            return;
        }
        if (temp->right) {
            if (temp->right == d_node) {
                temp->right == NULL;
                delete (d_node);
                return;
            } else {
                q.push(temp->right);
            }
        }
        if (temp->left) {
            if (temp->left == d_node) {
                temp->left = NULL;
                delete (d_node);
                return;
            } else {
                q.push(temp->left);
            }
        }
    }
}


// delete element
Node* deletion(Node* root, int key) {
    if (root == NULL) {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL) {
        if (root->key == key) {
            return NULL;
        } else {
            return root;
        }
    }
    queue<Node*> q;
    q.push(root);
}

int main() {

}