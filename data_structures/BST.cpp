#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node *left, *right, *parent;

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

    Node* search(Node* root, int value){
        if(root==NULL or root->val==value){
            return root;
        }
        if(value < root->val) {
            return search(root->left, value);
        }else{
            return search(root->right, value);
        }
    }

private:
    Node* insert_private(Node *root, int value){
        if(root == NULL){
            return new Node(value);
        }
        if(value <= root->val) {
            root->left = insert_private(root->left, value);
            root->left->parent = root;
        }else{
            root->right = insert_private(root->right, value);
            root->right->parent = root;
        }
        return root;
    }
};


Node* minimum(Node *root) {
    while(root->left !=  NULL) {
        root = root->left;
    }
    return root;
}

Node* maximum(Node *root) {
    while(root->right !=  NULL) {
        root = root->right;
    }
    return root;
}

Node* successor(Node* root){
    // finding smallest value which is greater than root node
    if(root->right != NULL) {
        return minimum(root->right);
    }
    Node* temp = root;
    while(root!=NULL and root->right==temp) {
        temp = root;
        root = root->parent;
    }
    return root;
}

Node* predecessor(Node* root){
    // finding greatest value which is smaller than root node
    if(root->left != NULL) {
        return maximum(root->left);
    }
    Node* temp = root->parent;
    while(temp!=NULL and temp==root->left) {
        root = temp;
        temp = temp->parent;
    }
    return temp;
}

void deleteNode(BST *bst, Node *node) {
    if(node->right == NULL and node->left == NULL) {
        delete node;
        // we set the pointer to NULL to avoid dangling pointer
        node = NULL;
    }
}


int main() {

    BST *tree = new BST(10);
    tree->insert(11);
    tree->insert(9);

    // cout << tree->root->val << endl;
    // cout << tree->root->left->val << endl;
    // cout << tree->root->right->val << endl;

    // cout<< (tree->search(tree->root, 9))->val << endl;

    tree->insert(15);
    tree->insert(16);
    tree->insert(13);

    /*Node* a = tree->root->right->right->right;*/
    /*// cout << a->parent->val << endl;*/
    /*cout<< "a : " << a->val << endl;*/
    /*// cout << "Successor : " << successor(a)->val << endl;*/
    /*cout << "Predecessor : " << predecessor(a)->val << endl;*/

    Node *node_containing_13 = tree->search(tree->root,13);
    cout<<tree->search(tree->root,13)->val;
    deleteNode(tree, node_containing_13);

    return 0;
}
