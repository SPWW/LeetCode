class Solution {
public:
    vector<string> ret;
    void helper(string temp,int l,int r){
        if(l==0&&r==0){
            ret.push_back(temp);
        }
        if(l>0){
            helper(temp+"(",l-1,r);
        }
        if(l<r){
            helper(temp+")",l,r-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        helper("",n,n);
        return ret;
    }
};
