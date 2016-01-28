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
    void traversaler(vector<vector<int>>& ret,TreeNode* p,int level){
        //cout << level << endl;
        if(p==nullptr)return;
        if((static_cast<int>(ret.size())-1)<level){
            ret.push_back(vector<int>(1,p->val));
        }else{
            ret.at(level).push_back(p->val);
        }


        traversaler(ret,p->left,level+1);
        traversaler(ret,p->right,level+1);

        return;
    }


    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        traversaler(ret,root,0);
        for(int i = 0;i<ret.size();++i){
            if((i+1)%2==0){
                reverse(ret.at(i).begin(),ret.at(i).end());
            }
        }
        return ret;
    }
};
