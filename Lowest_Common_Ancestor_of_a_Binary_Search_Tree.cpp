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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr){
            return nullptr;
        }
        
        if(root->val == p->val || root->val == q->val){
        
            return root;
        }
        
        TreeNode* pl = lowestCommonAncestor(root->left,p,q);
        TreeNode* pr = lowestCommonAncestor(root->right,p,q);
        
        
        if(pl != nullptr && pr != nullptr){
            return root;
        }else if(pl != nullptr){
            return pl;
        }else if(pr != nullptr){
            return pr;
        }else{
            return nullptr;
        }
        
    }
};
