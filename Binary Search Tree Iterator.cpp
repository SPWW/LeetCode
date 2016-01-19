/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    stack<TreeNode*> tstack;
    BSTIterator(TreeNode *root) {
        while(root!=nullptr){
            tstack.push(root);
            root=root->left;
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(tstack.empty())return false;
        return true;
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* top = tstack.top();
        tstack.pop();
        if(top->right!=nullptr){
            TreeNode* curr = top->right;
            while(curr!=nullptr){
                tstack.push(curr);
                curr=curr->left;
            }
        }
        return top->val;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
