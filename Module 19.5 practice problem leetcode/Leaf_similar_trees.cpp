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

class Solution {
public:
    void preorder1(TreeNode* root1,vector<int>&v){
        if(root1==NULL)
        {
            return ;
        }
        
        if(root1->left==NULL && root1->right==NULL)
        {
            v.push_back(root1->val);
        }
       if(root1->left) preorder1(root1->left,v);
       if(root1->right) preorder1(root1->right,v);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    
   
       vector<int>v1;
 vector<int>v2;
        preorder1(root1,v1);
        preorder1(root2,v2);
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
          for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
        if(v1==v2){
            return true;
        }
        else 
            return false;
        
        
    }
};