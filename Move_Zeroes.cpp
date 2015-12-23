class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = nums.size();
        for(auto it = nums.begin() ; it != nums.end();){
            int temp_at = 0;
            if(0 == *it){
                temp_at = it - nums.begin();
                nums.erase(it);
                nums.push_back(0);
                it = nums.begin() + temp_at;
            }else{
                it++;
            }
            count --;
            if(count == 0){
                return;
            }
            
        }
    }
};
