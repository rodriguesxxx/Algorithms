#include<iostream>
using namespace std;

struct Tree {
    int value = 0;
    Tree *left;
    Tree *right;
    Tree (int val) : value(val), left(nullptr), right(nullptr) {};
};

void insert(Tree*& tree, int value) {
    if(tree == nullptr) {
        tree = new Tree(value);
        return;
    }

    if(value < tree->value) {
        insert(tree->left, value);
    } else {
        insert(tree->right, value);
    }
}

/*
        10
       /  \
      8   11
     / \
    1   9
   /
  2

  remove(1)

        10
       /  \
      8   11
     / \
    2   9
*/
Tree* remove_with_only_child(Tree*& tree, int value) {
    if(tree == nullptr) return 0;

    if(tree->value == value) {
        Tree* child = tree->left != nullptr ? tree->left : tree->right;
        free(tree);

        return child;
    }

    return nullptr;
}

void remove(Tree*& tree, int value) {
    if(tree == nullptr) return;

    if(value == tree->value) {
        free(tree);
    } 

    if(value < tree->value) {
        tree->left = remove_with_only_child(tree->left, value);
    } else {
        tree->right = remove_with_only_child(tree->right, value);
    }
}

int main() {
    Tree *tree = new Tree(10);

    insert(tree, 9);
    insert(tree, 11);
    insert(tree, 12);
    insert(tree, 8);
    insert(tree, 13);

    remove(tree, 12);

    cout <<  tree->right->value << endl;
}