#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft;
        Node *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
bool perfect_binary_Tree(Node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    if (root->left != NULL && root->right == NULL || root->left == NULL && root->right != NULL)
    {
        return false;
    }
    bool l = perfect_binary_Tree(root->left);
    bool r = perfect_binary_Tree(root->right);
    if (l == false || r == false)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    Node *root = input_tree();
    bool x = perfect_binary_Tree(root);
    if (x == true)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}