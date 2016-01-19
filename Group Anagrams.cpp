class Solution {
public:
    static bool LexCompare(const string& a, const string& b) {
        return lexicographical_compare(a.begin(), a.end(),
                                            b.begin(), b.end());
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> ret;
        for(auto& each:strs){
            string temp(each);
            sort(temp.begin(),temp.end());
            auto it = ret.find(temp);
            if(it == ret.end()){
                ret[temp] = (vector<string>(1,each));
            }else{
                it->second.push_back(each);
            }
        }
        vector<vector<string>> rv;
        for(auto each:ret){
            vector<string> temp;
            for(auto e:each.second){
                temp.push_back(e);
            }
            sort(temp.begin(),temp.end(),LexCompare);
            rv.push_back(temp);
        }
        return rv;
    }
};
