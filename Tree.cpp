#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = new Node{1, new Node{2, NULL, NULL}, new Node{3, NULL, NULL}};
    cout << "Inorder Traversal: ";
    inorder(root);
    return 0;
}
