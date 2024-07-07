#include<bits/stdc++.h>
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
void insert(Node *root,int x){
if(root==NULL)
{
    root=new Node(x);
    return;
}
Node * cur=root;
Node* par=NULL;
while(cur!=NULL){
    if(x<cur->val)
    {
        par=cur;
        cur=cur->left;

    }
    else{
        par=cur;
        cur=cur->right;
    }
}
if(x<par->val){
    par->left=new Node(x);
}
else{
    par->right=new Node(x);
}

}
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        /* code */
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2.jabotiyo ja kaj ase
        cout << f->val << " ";

        // 3. ter children guloke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int main()
{
    Node *root=input_tree();
    int val;
    cin>>val;
    insert(root,val);
    level_order(root);

    
    return 0;
}