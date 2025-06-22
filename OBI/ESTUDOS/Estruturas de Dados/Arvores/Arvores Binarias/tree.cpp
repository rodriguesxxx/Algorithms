#include<iostream>
using namespace std;

class Tree {
    int value;
    Tree *left, *right, *parent;
        
    public:
        Tree (int);
        void visualizer();
        void insert(int value);
        Tree* search(int value);
        Tree* getLeft();
        Tree* getRight();
        Tree* getFather();
        Tree* getBrother();
        int getValue();
        bool isleft();
        bool isright();
        Tree* makeTree(Tree*& tree, int value);
};

Tree::Tree(int value) {
    this->value = value;
    this->right = nullptr;
    this->left = nullptr;
    this->parent = nullptr;
}

Tree* Tree::getFather() {
    return this->parent;
}

Tree* Tree::getLeft() {
    return this->left;
}

Tree* Tree::getRight() {
    return this->right;
}

int Tree::getValue() {
    return this->value;
}

bool Tree::isleft() {
    if(this->parent == nullptr) return false;
    if(this->parent->getLeft() == this) return true;
    return false;
}

bool Tree::isright() {
    if(this->parent == nullptr) return false;
    if(this->parent->getRight() == this) return true;
    return false;
}

Tree* Tree::getBrother() {
    if(this->isleft()) return this->parent->right;
    if(this->isright()) return this->parent->left;
    return nullptr;
}

Tree* Tree::makeTree(Tree*& tree, int value) {
    if(tree == nullptr) {
        tree = new Tree(value);
        tree->parent = this;
        return tree;
    }

    return nullptr;
}

void Tree::insert(int value) {
    if(value < this->value && !this->makeTree(this->left, value)) {
        this->left->insert(value);
        this->left->parent = this;
    }

    if(value > this->value && !this->makeTree(this->right, value)) {
        this->right->insert(value);
        this->right->parent = this;
    }
}

Tree* Tree::search(int value) {
    if(this == nullptr) {
        return nullptr;
    }

    if(this->value == value) {
        return this;
    }

    if(value < this->value) {
        return this->left->search(value);
    } else {
        return this->right->search(value);
    }
}

void Tree::visualizer() {

}

int main() {
    Tree tree(10);
    tree.insert(9);
    tree.insert(11);
    tree.insert(22);
    tree.insert(23);
    tree.insert(444);

    cout << tree.search(23) << "\n";
}