class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> hasit;
        for(int i= 0 ;i < nums.size();i++){
            if(hasit.find(nums[i]) != hasit.end()){
                return true;
            }
            else{
                hasit.insert(nums[i]);
            }
        }
    
        return false;
    }
};
