class Solution {
public:
    vector<vector<int>> ret;
    int n;
    
    void helper(vector<int>& num,vector<int>& x,int k){
        
        for(int i=k;i<num.size();++i){
            vector<int> tx(x);
            tx.push_back(num.at(i));
            ret.push_back(tx);
            helper(num,tx,i+1);
        }
        
        return;
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        vector<int> temp;
        ret.push_back(temp);
        sort(nums.begin(),nums.end());
        helper(nums,temp,0);
        return ret;
    }
};
