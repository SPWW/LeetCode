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
    vector<vector<int>> ret;
    void helper(const TreeNode* p,vector<int> path,int tsum,const int& sum){
        if(p==nullptr)return;
        if(p->right==nullptr && p->left==nullptr){
            tsum+=p->val;
            path.push_back(p->val);
            if(tsum==sum){
                ret.push_back(path);
            }
            return;
        }else{
        
        tsum+=p->val;
        path.push_back(p->val);
        if(p->left!=nullptr)
        helper(p->left,path,tsum,sum);
        
        if(p->right!=nullptr)
        helper(p->right,path,tsum,sum);
        }
        return;
        
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> temp;
        helper(root,temp,0,sum);
        return ret;
    }
};
