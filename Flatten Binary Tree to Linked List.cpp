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
    vector<TreeNode*> ps;
    void helper(TreeNode* p){
        if(p==nullptr){
            return;
        }
        ps.push_back(p);
        helper(p->left);
        helper(p->right);
        return;
    }
    void flatten(TreeNode* root) {
        helper(root);
        for(int i= 0;i<ps.size();++i){
            if(i==ps.size()-1){
                ps[i]->left=nullptr;
                ps[i]->right=nullptr;
            }else{
                ps[i]->left = nullptr;
                ps[i]->right = ps[i+1];
            }
        }
        return;
    }
};
