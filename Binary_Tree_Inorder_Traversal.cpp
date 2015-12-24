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
    vector<int> ret;
    void walk(TreeNode* T){
        if(T==nullptr)return;
        
        walk(T->left);
        ret.push_back(T->val);
        walk(T->right);
        return;
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        walk(root);
        return ret;
    }
};
