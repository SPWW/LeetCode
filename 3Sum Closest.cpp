class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()<3)return 0;
        int ret = nums[0] + nums[1] + nums[2];
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            int j = i+1,k=nums.size()-1;
            while(j<k){
                int s = nums[i]+nums[j]+nums[k];
                if(abs(ret-target)>abs(s-target)){
                    ret = s;
                }
                if(s<=target){
                    j++;
                }else{
                    k--;
                }
            }
        }
        return ret;
    }
};
