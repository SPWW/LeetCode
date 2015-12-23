class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> f(nums.size(),1);
        vector<int> b(nums.size(),1);
        
        f.at(0) = nums.at(0);
        b.at(0) = nums.at(nums.size()-1);
        
        for(int i = 1;i<nums.size()-1;i++){
            f.at(i) = nums.at(i) * f.at(i-1);
            b.at(i) = nums.at(nums.size()-1-i) * b.at(i-1);
        }
        
        vector<int> ret;
        ret.push_back(b.at(nums.size()-2));
        for(int i=1;i<nums.size()-1;i++){
            ret.push_back(f.at(i-1)*b.at(nums.size()-i-2));
        }
        ret.push_back(f.at(nums.size()-2));
        
        return ret;
    }
};
