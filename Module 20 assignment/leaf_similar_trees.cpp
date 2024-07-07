/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
TreeNode *input_tree()
{
    int val;
    cin >> val;
    TreeNode *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
        root = new TreeNode(val);
    queue<TreeNode *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        TreeNode *myleft;
        TreeNode *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new TreeNode(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new TreeNode(r);

        p->left = myleft;
        p->right = myright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        queue<TreeNode *>q1;
        queue<TreeNode *>q2;
        q1.push(root1);
        q2.push(root2);
        vector<int>v1;
        vector<int>v2;
        while(!q1.empty())
        {
            TreeNode* f1=q1.front();
            q1.pop();

            if(f1->left==NULL && f1->right==NULL){
                v1.push_back(f1->val);
            }

            if(f1->left) q1.push(f1->left);
            if(f1->right) q1.push(f1->right);
        }
         while(!q2.empty())
        {
            TreeNode* f2=q2.front();
            q2.pop();

            if(f2->left==NULL && f2->right==NULL){
                v2.push_back(f2->val);
            }

            if(f2->left) q2.push(f2->left);
            if(f2->right) q2.push(f2->right);
        }
        if(v1==v2){
            return  true;
        }
        else{
             return false;
        }
    }

int main()
{
    TreeNode *root1 = input_tree();
     TreeNode *root2 = input_tree();
   bool x=leafSimilar( root1,  root2);
   if(x==true)
   {
    cout<<"True"<<endl;
   }
   else{
    cout<<"False"<<endl;
   }

    return 0;
}