class Solution {
public:
    set<vector<int>> ret;
    void helper(vector<int>& candidates,int tar,vector<int> com,int k){
        if(tar == 0){
            ret.insert(com);
        }

        for(int i = k;i<candidates.size();++i){
            int ttar = tar-candidates[i];
            if(ttar<0)return;
            vector<int> tcom = com;
            tcom.push_back(candidates[i]);
            helper(candidates,ttar,tcom,i+1);
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        helper(candidates,target,vector<int>{},0);
        vector<vector<int>> r;
        for(auto e:ret){
            r.push_back(e);
        }
        return r;
    }
};
