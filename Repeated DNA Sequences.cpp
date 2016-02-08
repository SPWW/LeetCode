class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> rret;
        set<string> vret;
        set<string> ret;
        if(s.size()<10)return rret;
        for(int i = 0;i<s.size()-9;i+=1){
            string key = s.substr(i,10);
            if(ret.find(key)!=ret.end()){
                vret.insert(key);
            }
            ret.insert(key);
        }
        for(auto each:vret){
            rret.push_back(each);
        }
        return rret;
    }
};
