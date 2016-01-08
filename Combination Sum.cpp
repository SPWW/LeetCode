class Solution {
public:
    vector<vector<int>> ret;
    void helper(const vector<int>& candidates,vector<int> v,int num,int b){
        if(num == 0){
            sort(v.begin(),v.end());
            ret.push_back(v);
            return;
        }
        if(num < 0)return;
        
        for(int i = b ;i<candidates.size();++i){
            vector<int> tv(v);
            tv.push_back(candidates.at(i));
            helper(candidates,tv,num-candidates.at(i),i);
        }
        
        return;
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        helper(candidates,vector<int>(),target,0);
        return ret;

    }
};
