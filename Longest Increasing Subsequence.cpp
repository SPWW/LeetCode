class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()<=1)return nums.size();
        vector<int> tags(nums.size(),1);
        for(int i=0;i<nums.size();++i){
            for(int j=0;j<i;++j){
                if(nums.at(j)<nums.at(i)){
                    if(tags.at(j)+1>tags.at(i)){
                        tags[i] = tags.at(j)+1;
                    }
                }
            }
        }
        int ret = 0;
        for(auto& x:tags){
            ret = ret>x?ret:x;
        }
        return ret;
    }
};
