class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int> tag(words.size(),0);
        for(int i=0;i<words.size();i++){
            for(auto each:words.at(i)){
                tag.at(i) |= 1<<static_cast<int>(each);
            }
        }
        int max_ret =0;
        for(int i=0;i<tag.size();i++){
            for(int j=i;j<tag.size();j++){
                if((tag.at(i)&tag.at(j))==0){
                    max_ret = max(max_ret,static_cast<int>(words.at(i).size()*words.at(j).size()));
                }
            }
        }
        return max_ret;
    }
};
