#include <bits/stdc++.h>

using namespace std;

template <typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void inorder(BinaryTreeNode<int> *root, vector<int> &v) {
    if (root == NULL) {
        return;
    }
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

void preorder(BinaryTreeNode<int> *root, vector<int> &v) {
    if (root == NULL) {
        return;
    }
    v.push_back(root->data);
    preorder(root->left, v);
    preorder(root->right, v);
}

void postorder(BinaryTreeNode<int> *root, vector<int> &v) {
    if (root == NULL) {
        return;
    }
    postorder(root->left, v);
    postorder(root->right, v);
    v.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root) {
    vector<vector<int>> traversals;
    vector<int> v1, v2, v3;

    inorder(root, v1);
    preorder(root, v2);
    postorder(root, v3);

    traversals.push_back(v1);
    traversals.push_back(v2);
    traversals.push_back(v3);

    return traversals;
}

int main() {
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    root->left = new BinaryTreeNode<int>(2);
    root->right = new BinaryTreeNode<int>(3);
    root->left->left = new BinaryTreeNode<int>(4);
    root->left->right = new BinaryTreeNode<int>(5);

    vector<vector<int>> traversals = getTreeTraversal(root);

    cout << "Inorder traversal: ";
    for (int num : traversals[0]) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Preorder traversal: ";
    for (int num : traversals[1]) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Postorder traversal: ";
    for (int num : traversals[2]) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
