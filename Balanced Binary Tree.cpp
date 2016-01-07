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
    bool ans = true;

    int deep(TreeNode* Node,int d){
        if(Node == nullptr){
            return d;
        }
        
        int ds = d+1;
        
        int ld = deep(Node->left,ds);
        int rd = deep(Node->right,ds);
        
        if(ld-rd >1 || rd-ld > 1){
            cout << ld << "  " << rd << endl;
            ans = false;
        }
    
        return ld>rd?ld:rd;
    }


    bool isBalanced(TreeNode* root) {
        deep(root,0);
        return ans;
    }
};
