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
    int geth(TreeNode* p){
        if(p==nullptr)return 0;
        return 1+geth(p->left);
    }
    int countNodes(TreeNode* root) {
        if(root==nullptr)return 0;
        int lh = geth(root->left);
        int rh = geth(root->right);
        if(lh==rh){
            return (1<<lh) + countNodes(root->right);
        }else{
            return (1<<rh) + countNodes(root->left);
        }
        
    }
};
