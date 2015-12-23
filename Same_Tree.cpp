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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr){
            return true;
        }
        
        if((p != nullptr && q == nullptr) || (p == nullptr && q != nullptr))
        {
            cout << "1" <<endl;
            return false;
        }
        
                
        if((p->right == nullptr && q->right != nullptr) || (p->left == nullptr && q->left != nullptr) || 
            (p->right != nullptr && q->right == nullptr) || (p->left != nullptr && q->left == nullptr))
            {
                
                cout << "2" <<endl;
                return false;
            }
        
        if(p->val != q->val){
            return false;
        }
        

        
        bool retl =true,retr = true;
        
        if(p->left != nullptr && q -> left != nullptr){
            retl = isSameTree(p->left,q->left);
        }
        
        if(p->right != nullptr && q->right != nullptr){
            retr = isSameTree(p->right,q->right);
        }
        
        if(retl == false || retr == false){
            cout << "3" <<endl;
            return false;
        }
        else
        {
            return true;
        }
    
    
    }
};
