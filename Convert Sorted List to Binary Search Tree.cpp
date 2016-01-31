/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    void creat(vector<int>& v,int l,int r,TreeNode** p){
        //cout << l << "->" << r << endl;
        if(l==r || l==v.size()){
            p=nullptr;
            return;
        }
        int mid = l + (r-l)/2;
        int ll=l;
        int lr=mid;
        int rl=mid+1;
        int rr=r;
        //cout << mid << ":" << v.at(mid) << endl;
        *p = new TreeNode(v.at(mid));
        creat(v,ll,lr,&((*p)->left));
        creat(v,rl,rr,&((*p)->right));
        return;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        if(head==nullptr)return nullptr;
        vector<int> vals;
        while(head!=nullptr){
            vals.push_back(head->val);
            head = head->next;
        }
        int l = 0;
        int r = vals.size();
        TreeNode* root;
        creat(vals,l,r,&root);
        //cout << "+++" << endl;
        return root;
    }
};
