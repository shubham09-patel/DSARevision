//Instead of building trees using complex recursion, we construct the tree level by level
//(Breadth-First manner) using a Queue ( std::queue<Node*> ).

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value) {
            data = value;
            left = nullptr;
            right = nullptr;
        }
};

Node* buildTree() {
int rootVal;
cout << "Enter root element: ";
cin >> rootVal;
if (rootVal == -1) {
return nullptr;
}
// Create root node
Node* root = new Node(rootVal);
// Queue to hold node pointers for level-order processing
queue<Node*> q;
q.push(root);
while (!q.empty()) {
Node* temp = q.front();
q.pop();
// 1. Process Left Child
int leftVal;
cout << "Enter left child of " << temp->data << ": ";
cin >> leftVal;
if (leftVal != -1) {
temp->left = new Node(leftVal);
q.push(temp->left);
}
// 2. Process Right Child
int rightVal;
cout << "Enter right child of " << temp->data << ": ";
cin >> rightVal;
if (rightVal != -1) {
temp->right = new Node(rightVal);
q.push(temp->right);
}
}
return root;
}

int main() {
cout << "--- Binary Tree Level-Order Construction ---\n";
Node* root = buildTree();
cout << "\nBinary Tree successfully constructed!\n";
return 0;
}