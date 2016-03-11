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
    stack<TreeNode*> tp,tq,log;
    bool pf = false;
    bool qf = false;
    void findnode(TreeNode* r,TreeNode* p, TreeNode* q){
        if(r==nullptr)return;
        if(pf == true && qf == true)return;
        log.push(r);
        if(pf == false && r == p){
            tp = log;
            pf = true;
        }
        if(qf == false && r == q){
            tq = log;
            qf = true;
        }
        findnode(r->left,p,q);
        findnode(r->right,p,q);
        log.pop();
        return;
        
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        findnode(root,p,q);

        while(1){
            tp.size()>tq.size()?tp.pop():tq.pop();
            if(tp.size()==tq.size())break;
        }
        while(tp.size()){
            if(tp.top()==tq.top()){
                return tp.top();
            }
            tp.pop();
            tq.pop();
        }
        return nullptr;
    }
};
