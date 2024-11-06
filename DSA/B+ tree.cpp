#include <iostream>
#include <vector>
using namespace std;

class BPlusTreeNode {
public:
    vector<int> keys;
    vector<BPlusTreeNode*> children;
    bool isLeaf;

    BPlusTreeNode(bool leaf) : isLeaf(leaf) {}

    void insertNonFull(int key);
    void splitChild(int i, BPlusTreeNode* y);
    void traverse();
    BPlusTreeNode* search(int key);
};

class BPlusTree {
private:
    BPlusTreeNode* root;
    int t; // Minimum degree

public:
    BPlusTree(int _t) : root(nullptr), t(_t) {}

    void insert(int key);
    void traverse() {
        if (root != nullptr) root->traverse();
    }
    BPlusTreeNode* search(int key) {
        return (root == nullptr) ? nullptr : root->search(key);
    }
};

void BPlusTreeNode::insertNonFull(int key) {
    int i = keys.size() - 1;

    if (isLeaf) {
        keys.insert(keys.begin() + i + 1, key);
        while (i >= 0 && keys[i] > key) {
            keys[i + 1] = keys[i];
            i--;
        }
        keys[i + 1] = key;
    } else {
        while (i >= 0 && keys[i] > key) i--;
        if (children[i + 1]->keys.size() == 2 * t - 1) {
            splitChild(i + 1, children[i + 1]);
            if (keys[i + 1] < key) i++;
        }
        children[i + 1]->insertNonFull(key);
    }
}

void BPlusTreeNode::splitChild(int i, BPlusTreeNode* y) {
    BPlusTreeNode* z = new BPlusTreeNode(y->isLeaf);
    z->keys.assign(y->keys.begin() + t, y->keys.end());
    if (!y->isLeaf) z->children.assign(y->children.begin() + t, y->children.end());
    keys.insert(keys.begin() + i, y->keys[t - 1]);
    children.insert(children.begin() + i + 1, z);
    y->keys.resize(t - 1);
    y->children.resize(t);
}

void BPlusTree::insert(int key) {
    if (root == nullptr) {
        root = new BPlusTreeNode(true);
        root->keys.push_back(key);
    } else {
        if (root->keys.size() == 2 * t - 1) {
            BPlusTreeNode* s = new BPlusTreeNode(false);
            s->children.push_back(root);
            s->splitChild(0, root);
            int i = 0;
            if (s->keys[0] < key) i++;
            s->children[i]->insertNonFull(key);
            root = s;
        } else {
            root->insertNonFull(key);
        }
    }
}

void BPlusTreeNode::traverse() {
    int i;
    for (i = 0; i < keys.size(); i++) {
        if (!isLeaf) children[i]->traverse();
        cout << " " << keys[i];
    }
    if (!isLeaf) children[i]->traverse();
}

BPlusTreeNode* BPlusTreeNode::search(int key) {
    int i = 0;
    while (i < keys.size() && key > keys[i]) i++;
    if (i < keys.size() && keys[i] == key) return this;
    return isLeaf ? nullptr : children[i]->search(key);
}

int main() {
    BPlusTree t(3);

    t.insert(10);
    t.insert(20);
    t.insert(5);
    t.insert(6);
    t.insert(12);
    t.insert(30);
    t.insert(7);
    t.insert(17);

    cout << "Traversal of B+ tree: ";
    t.traverse();
    cout << endl;

    int key = 6;
    if (t.search(key) != nullptr)
        cout << "Element " << key << " found in the tree." << endl;
    else
        cout << "Element " << key << " not found in the tree." << endl;

    return 0;
}