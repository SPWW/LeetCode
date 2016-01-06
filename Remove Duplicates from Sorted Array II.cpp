class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2)return nums.size();
        map<int,int> log;
        int ret = 0;
        for(auto it=nums.begin();it != nums.end();it++){
            if(log.find(*it) == log.end() || log[*it] < 2){
                ++ret;
                ++log[*it];
            }else{
                nums.erase(it);
                it--;
            }
        }
        return ret;
    }
};
