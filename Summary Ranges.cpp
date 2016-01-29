class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        vector<string> ret;
        if(nums.size()==0)return ret;
        int state = 0;//0:begin,1:counting
        int begin = 0;
        int end = begin;
        for(int i = 0;i<nums.size();++i){
            if(state == 0){
                begin = nums.at(i);
                end = begin;
                state =1;
            }else{
                if(nums.at(i)==end+1){
                    end++;
                }else{
                    if(begin!=end){
                        ret.push_back(to_string(begin)+"->"+to_string(end));
                    }else{
                        ret.push_back(to_string(begin));
                    }
                    begin = nums.at(i);
                    end = begin;
                }
            }
        }
        if(begin!=end){
            ret.push_back(to_string(begin)+"->"+to_string(end));
        }else{
            ret.push_back(to_string(begin));
        }
        return ret;
    }
};
