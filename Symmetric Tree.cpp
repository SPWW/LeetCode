/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    bool walk(TreeNode* l,TreeNode* r){
        if(l==nullptr && r==nullptr)return true;
        if(l==nullptr || r==nullptr)return false;
        return  l->val==r->val && walk(l->left,r->right) && walk(l->right,r->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return walk(root->left,root->right);
    }
};
