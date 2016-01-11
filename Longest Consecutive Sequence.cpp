class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mret = 1;
        int ret = 1;
        int last = *nums.begin();
        for(int i = 1;i<nums.size();++i){
            if(nums.at(i)==last+1){
                ++ret;
                ++last;
            }else if(nums.at(i)==last){
                
            }else{
                mret = mret>ret?mret:ret;
                ret=1;
                last = nums.at(i);
            }
        }
        mret = mret>ret?mret:ret;
        return mret;
    }
};
