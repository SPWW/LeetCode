class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = 0;
        sort(nums.begin(),nums.end());
        for(auto p = nums.begin();p < nums.end();++p,++i)
        {
            if(*p != i )
            {
                return i;
            }
            
        }
        return i;
    }
};
