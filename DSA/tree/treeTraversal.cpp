#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int k) {
        key = k;
        left = right = NULL;
    }
};

// TODO: traversal inorder preorder postorder 
void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

void preorder(Node* root) {
    if (root) {
        cout<<root->key<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}

void postorder(Node* root) {
    if (root) {
        inorder(root->left);
        inorder(root->right);
        cout<<root->key<<" ";
    }
}


// TODO: Heigh of a Binary Tree
int heightOfTree(Node* root) {
    if (!root) return 0;
    return 1 + max(heightOfTree(root->left), heightOfTree(root->right));
}


// TODO: Print Node at distance K
void printNodeAtDistanceK(Node* root, int k) {
    if (!root) return;
    if (k == 0) cout<< root->key << " ";
    else {
        printNodeAtDistanceK(root->left, k--);
        printNodeAtDistanceK(root->right, k--);
    }
}

/*
        1
       / \
      2   3
     / \
    4  5

    p(1, 1)
       |_ p(2, 0) -> "2"
              |_ p(4, -1)
                     |_ p(null, -2) -> return 
              |_ p(5, 0) -> "5"
                     |_ p(null, -2) -> return
       |_ p(3, 0) -> "3"
              |_ p(null, -1) -> return

*/


// TODO: Level order traversal (using Queue)
void levelOrderTraversal(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}

// TODO: Level order traversal line by line
void levelOrderTraversalLine(Node* root) {
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
            continue;
        }
        cout << curr->key << " ";
        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}
/*
       10
      /  \
    20   30
    / \
   40 50
   /
  60
    q = []
    curr =  null 
    output: 
    10 \n
    20 30 \n
    40 50 \n 
    60 \n
*/


// TODO: Size of Binary Tree
int sizeOfBinaryTree(Node* root) {
    if (!root) return 0;
    return 1 + sizeOfBinaryTree(root->left) + sizeOfBinaryTree(root->right);
}

/*
    t(10)
      return t(80) 2      +      t(70) 1
               |_ t(30) + t(40)   |_ 1
                    |_ 1   |_ 1
*/ 

// TODO: Maximum in Binary Tree
int maxValueOfTree(Node* root) {
    if (!root) return INT_MIN;
    if (!root->left && !root->right) return root->key;
    return max(maxValueOfTree(root->left), maxValueOfTree(root->right));

}

// ! Not implement yet!!!!!
// TODO: Print Left View of Binary Tree
// ! Not implement yet!!!!!
// using queue
void leftViewOfBinaryTree(Node* root) {
    // queue<Node*> q;
    // q.push(root);
    // while (!q.empty()) {
    //     Node* curr = q.front();
    //     q.pop();
    //     cout << curr->key << " ";
    //     if (curr->left) q.push(curr->left);
    // }
}

// recursive
// ! Not implement yet!!!!!
void leftView(Node* root) {

}

// TODO: Children Sum Property
bool childrenSum(Node* root) {
    if (!root) return true;
    if (!root->left && !root->right) return true;
    int sum = 0;
    if (root->left) sum += root->left->key;
    if (root->right) sum += root->right->key;
    return sum == root->key && childrenSum(root->left) && childrenSum(root->right);
}

/*
    t(20)
     / \ s = 8 + 12
  t(8) t(12)
  T     / \
     t(3)  t(9)

*/

// TODO: Check for Balanced Binary Tree
int isBalance(Node* root) {
    if (!root) return 0;
    int lh = isBalance(root->left);
    if (lh == -1) return -1;
    int rh = isBalance(root->right);
    if (rh == -1) return -1;
    if (abs(lh - rh) > 1) return -1;
    else return max(lh, rh) + 1;
}

// TODO: Maximum Width of Binary Tree
int maximumWidth(Node* root) {}

// TODO: Convert Binary Tree to Doubly Linked List

// TODO: Construct Binary Tree from Inorder and Preorder

// TODO: Tree Traversal in Spiral Form

// TODO: Diameter of a Binary Tree

// TODO: LCA of Binary Tree

// TODO: Burn a Binary Tree from a Leaf

// TODO: Count nodes in a Complete Binary Tree

// TODO: Serialize and Deserialize a Binary Tree

// TODO: Iterative Inorder, Preorder, Postorder Traversal





/* -------------------------------------------------------------------------- */
/*                                    main                                    */
/* -------------------------------------------------------------------------- */

int main() {
    /*
       10
      /  \
    20   30
    / \
   40 50
   */
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    // cout<<heightOfTree(root);
    // inorder(root);
    // cout << "\n";
    // printNodeAtDistanceK(root, 1);
    // levelOrderTraversal(root);
    // cout<<maxValueOfTree(root);
    // levelOrderTraversalLine(root);
    // cout << sizeOfBinaryTree(root);
    // leftViewOfBinaryTree(root);
    cout<<childrenSum(root);
}