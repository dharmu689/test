#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    bool rightThread;

    Node(int val) : data(val), left(nullptr), right(nullptr), rightThread(false) {}
};

class ThreadedBinaryTree {
private:
    Node* root;

    Node* leftmost(Node* node) {
        while (node != nullptr && node->left != nullptr)
            node = node->left;
        return node;
    }

public:
    ThreadedBinaryTree() : root(nullptr) {}

    void insert(int data) {
        if (root == nullptr) {
            root = new Node(data);
            return;
        }

        Node* current = root;
        Node* parent = nullptr;

        while (current != nullptr) {
            parent = current;
            if (data < current->data) {
                if (current->left == nullptr) break;
                current = current->left;
            } else {
                if (current->rightThread) break;
                current = current->right;
            }
        }

        Node* newNode = new Node(data);

        if (data < parent->data) {
            newNode->left = parent->left;
            newNode->right = parent;
            parent->left = newNode;
        } else {
            if (parent->rightThread) {
                newNode->right = parent->right;
                parent->right = newNode;
            } else {
                newNode->right = parent->right;
                newNode->rightThread = true;
                parent->right = newNode;
            }
        }

        newNode->rightThread = true;
    }

    void inOrderTraversal() {
        Node* current = leftmost(root);
        while (current != nullptr) {
            cout << current->data << " ";
            if (current->rightThread)
                current = current->right;
            else
                current = leftmost(current->right);
        }
        cout << endl;
    }
};

int main() {
    ThreadedBinaryTree tbt;
    tbt.insert(4);
    tbt.insert(2);
    tbt.insert(6);
    tbt.insert(1);
    tbt.insert(3);
    tbt.insert(7);

    tbt.inOrderTraversal();  // Output: 1 2 3 4 6 7

    return 0;
}