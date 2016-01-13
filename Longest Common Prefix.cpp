class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)return "";
        int min_size= strs[0].size();
        for(auto& each:strs){
            min_size = each.size()<min_size?each.size():min_size;
        }
        string ret;
        for(int i = 0;i<min_size;++i){
            char x = strs[0].at(i);
            for(auto& each:strs){
                if(each.at(i) != x){
                    return ret;
                }
            }
            ret+=x;
        }
        
        return ret;
        
    }
};
