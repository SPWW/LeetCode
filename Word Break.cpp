class Solution {
public:
        map<string,bool> res;
    bool wordBreak(string s, unordered_set<string>& wordDict) {

        if(0==s.size())return true;
        if(res.find(s)!=res.end())return res[s];
        //cout << s << endl;
        bool ret = false;      
        for(int i = 0;i<=s.size();++i){

            string sub = s.substr(0,i);
            //cout << "** " << sub << endl;
            if(find(wordDict.begin(),wordDict.end(),sub)!=wordDict.end()){
                string temp = s.substr(i,s.size()-i);
                bool tret = wordBreak(temp,wordDict);
                res[temp] = tret;
                ret |= tret;
            }
        }
        return ret;
    }
};
