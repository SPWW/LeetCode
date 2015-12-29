class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> ret;
        vector<int> same;
        for(int i=0;i<nums.size();++i){
            if(target-nums[i]!=nums[i]){
                mp.insert (std::make_pair(nums[i],i+1));
            }else{
                same.push_back(i+1);
            }
        }
        int num1,num2;
        for(auto it = mp.begin();it!=mp.end();++it){
            if(mp.find(target-(it->first))!=mp.end()){
                    ret.push_back(mp[it->first]);
                    ret.push_back(mp[target-(it->first)]);
                    sort(ret.begin(),ret.end());

                return ret;
            }
        }
        return same;
    
        
    }
};
