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
    vector<TreeNode*> helper(int begin,int end){
        vector<TreeNode*> ret;
        if(begin>end){
            ret.push_back(nullptr);
            return ret;
        }
        
        for(int i = begin;i<= end;++i){
            vector<TreeNode*> left = helper(begin,i-1);
            vector<TreeNode*> right = helper(i+1,end);
            for(int j = 0;j<left.size();++j){
                for(int k = 0;k<right.size();++k){
                    TreeNode* new_root = new TreeNode(i);
                    new_root->left = left[j];
                    new_root->right = right[k];
                    ret.push_back(new_root);
                }
            }
        }
        return ret;
    }    

    vector<TreeNode*> generateTrees(int n) {
        if(n==0)return vector<TreeNode*>();
        return helper(1,n);
    }
};
