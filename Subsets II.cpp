class Solution {
public:
    set<vector<int>> ret;
    void helper(vector<int> nums,vector<int> re,int x){
        if(nums.size() == 0)return;
        
        for(int i = x;i<nums.size();++i){
            vector<int> tre(re);
            tre.push_back(nums.at(i));
            sort(tre.begin(),tre.end());
                ret.insert(tre);
            vector<int> tnums(nums);
            tnums.erase(tnums.begin()+i);
            helper(tnums,tre,i);
        }
        
        return;
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        ret.insert(vector<int>());
        helper(nums,vector<int>(),0);
        vector<vector<int>> rrr;
        for(auto each:ret){
            rrr.push_back(each);
        }
        return rrr;
    }
};
