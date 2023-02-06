#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int k) {
        key = k;
        left = NULL;
        right = NULL;
    }
};
/*
     10
      /  \
    20   30
    / \
   40 50
   /
  60
*/
// first: push root and push null
void BFSLineByLine(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1) {
        Node* curr = q.front();
        q.pop();
        if (!curr) {
            cout << "\n";
            q.push(NULL);
        }
        cout << curr->key << " ";
        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}


int main() {
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    BFSLineByLine(root);
    // cout<<heightOfTree(root);
    // inorder(root);
    // cout << "\n";
    // printNodeAtDistanceK(root, 1);
    // levelOrderTraversal(root);
    // cout<<maxValueOfTree(root);
    // levelOrderTraversalLine(root);
    // cout << sizeOfBinaryTree(root);
    // leftViewOfBinaryTree(root);
    // cout<<childrenSum(root);
}