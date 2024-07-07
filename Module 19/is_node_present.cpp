/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here

    if(root==NULL)
    {
        return 0;
    }
    queue<BinaryTreeNode<int> *>q;
    q.push(root);
    while(!q.empty())
    {
        BinaryTreeNode<int> *f=q.front();
        q.pop();
        if(x==f->data)
        {
             return true;
        }
        if(f->left) {
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
    return false;
}