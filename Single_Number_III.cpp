class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ret;
        auto temp = nums.begin();
        for(auto it = nums.begin()+1;it != nums.end()-1;it++){
            if(*(it-1) < *it && *it < *(it+1)){
                ret.push_back(*it);
            }
            
        }
        
        if(*nums.begin() < *(nums.begin()+1)){
            ret.push_back(*nums.begin());
        }
        
       if(*(nums.end()-1) > *(nums.end()-2)){
            ret.push_back(*(nums.end()-1));
        }
        
        return ret;
    }
};
