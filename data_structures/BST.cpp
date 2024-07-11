#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node *left, *right;

    Node(int value) : val(value){}
};

class BST{
public:
    Node *root;
    BST() : root(NULL){}
    BST(int value){
        insert(value);
        // root = new Node(value);
    }

    void insert(int value){
        root = insert_private(root, value);
    }

private:
    Node* insert_private(Node *root, int value){
        if(root == NULL){
            return new Node(value);
        }
        if(value <= root->val) {
            root->left = insert_private(root->left, value);
        }else{
            root->right = insert_private(root->right, value);
        }
        return root;
    }
};

int main() {

    BST *root = new BST(10);
    root->insert(11);
    root->insert(9);

    cout << root->root->val << endl;
    cout << root->root->left->val << endl;
    cout << root->root->right->val << endl;

    return 0;
}