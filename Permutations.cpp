class Solution {
public:
    vector<vector<int>> ret;
    void helper(vector<int>& v,vector<int>& nums){
        if(nums.empty()){
            ret.push_back(v);
            return;
        }
        for(int i=0;i<nums.size();i++){
            vector<int> temp(nums);
            vector<int> tv(v);
            tv.push_back(temp[i]);
            temp.erase(temp.begin()+i);
            helper(tv,temp);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        helper(temp,nums);
        return ret;
    }
};
