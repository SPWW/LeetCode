class Solution {
public:
    int findMin(vector<int>& nums) {
        for(auto it = nums.begin()+1;it!=nums.end();it++){
            if(*it<*(it-1)){
                return *it;
            }
        }
        if(nums.empty())return 0;
        return *nums.begin();
    }
};
