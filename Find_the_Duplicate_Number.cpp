class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0;
        int fast=0;
        int finder = 0;
        for(;;){
            slow = nums.at(slow);
            fast = nums.at(nums.at(fast));
            //cout << "slow " << slow << " fast " << fast << endl;
            if(slow == fast){
                //return nums.at(slow);
                break;
            }
        }
        for(;;){
            slow = nums.at(slow);
            finder = nums.at(finder);
           // cout << "slow " << slow << " finder " << finder << endl;
            if(slow == finder)return finder;
        }
    }
};
