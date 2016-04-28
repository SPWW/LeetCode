class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.empty())return 1;
        sort(nums.begin(),nums.end());
        int i = 1;
        
        for(auto x:nums){
            if(x>=1){
            if(x==i-1)continue;
            if(x!= i)return i;
            i++;
            }
        }
        return i;
    }
};
