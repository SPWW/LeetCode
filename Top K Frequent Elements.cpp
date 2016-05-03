class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mymap;
        for(auto x:nums){
            mymap[x]++;
        }
        
        vector<vector<int>> buckets(nums.size()+1,vector<int>());
        for(auto x:mymap){
            buckets[x.second].push_back(x.first);
        }
        vector<int> ret;
        for(int i = buckets.size()-1;i>=0;--i){
            if(!buckets[i].empty()){
                for(auto x:buckets[i]){
                    ret.push_back(x);
                    if(ret.size()>=k){
                        return ret;
                    }
                }
            }
        }
        return ret;
        
    }
};
