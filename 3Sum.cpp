class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ret;
        vector<vector<int>> r;
        sort(nums.begin(),nums.end());
        for(int i = 0 ;i<nums.size();i++){
            if(i>1 && nums.at(i)==nums.at(i-1))continue;
            int  j = i+1,k=nums.size()-1;
            while(j<k){
                int s = nums.at(i)+nums.at(j)+nums.at(k);
                if(s == 0){
                    ret.insert(vector<int>{nums.at(i),nums.at(j),nums.at(k)});
                }
                if(s <= 0){
                    do{
                        j++;
                    }while(j < k && nums.at(j)==nums.at(j-1));
                }else{
                    do{
                        k--;
                    }while(j < k && nums.at(k)==nums.at(k+1));
                }
            }
        }
        for(auto x:ret)r.push_back(x);
        return r;
    }
};
