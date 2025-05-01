#include<iostream>

using namespace std;

struct Node {
    int value = 0;
    Node* left;
    Node* right;
    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

//0(n)
void insert(Node*& tree, int value) {
    if(tree == nullptr) {
        tree = new Node(value);
        return;
    }

    if(value < tree->value) {
        insert(tree->left, value);
    } else {
        insert(tree->right, value);
    }
}

int main() {
    Node* tree = nullptr;
    
    insert(tree, 10);
    insert(tree, 6);
    insert(tree, 4);
    insert(tree, 5);
    insert(tree, 7);
    
    return 0;
}