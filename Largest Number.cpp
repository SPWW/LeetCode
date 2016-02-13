class Solution {
public:
    string largestNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end(),[](int& a,int& b)->bool{
            return to_string(a)+to_string(b)<to_string(b)+to_string(a);
        });
        stringstream ret;
        if(nums.at(nums.size()-1)==0)return "0";
        for(int i=nums.size()-1;i>=0;--i){
            ret << nums.at(i);
        }
        return ret.str();
    }
};
