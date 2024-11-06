#include <iostream>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;
    
    Node(int item) {
        key = item;
        left = right = nullptr;
    }
};

class BST {
public:
    Node* root;

    BST() {
        root = nullptr;
    }

    void insert(int key) {
        root = insertRec(root, key);
    }

    Node* search(int key) {
        return searchRec(root, key);
    }

    void inorder() {
        inorderRec(root);
    }

private:
    Node* insertRec(Node* root, int key) {
        if (root == nullptr) {
            root = new Node(key);
            return root;
        }

        if (key < root->key)
            root->left = insertRec(root->left, key);
        else if (key > root->key)
            root->right = insertRec(root->right, key);

        return root;
    }

    Node* searchRec(Node* root, int key) {
        if (root == nullptr || root->key == key)
            return root;

        if (key < root->key)
            return searchRec(root->left, key);

        return searchRec(root->right, key);
    }

    void inorderRec(Node* root) {
        if (root != nullptr) {
            inorderRec(root->left);
            cout << root->key << " ";
            inorderRec(root->right);
        }
    }
};

int main() {
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    cout << "Inorder traversal of the given tree: ";
    tree.inorder();  // Output: 20 30 40 50 60 70 80
    cout << endl;

    int key = 40;
    if (tree.search(key) != nullptr)
        cout << "Element " << key << " found in the tree." << endl;
    else
        cout << "Element