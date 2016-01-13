class Solution {
public:
    void helper(vector<string>& ret,const map<char,string>& mm,string& rr,string& dig){
        if(dig.size()==0){
            ret.push_back(rr);
            return;
        }
        
        for(int i = 0;i<mm.at(dig.at(0)).size();++i){
            string tdig(dig.substr(1,dig.size()-1));
            string trr(rr);
            trr+=mm.at(dig.at(0)).at(i);
            helper(ret,mm,trr,tdig);
            
        }
        
        return;
    }


    vector<string> letterCombinations(string digits) {
        vector<string> ret;
        if(digits.size()==0)return ret;
        map<char,string> m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        
        
        string temp;
        helper(ret,m,temp,digits);
        return ret;
    }
};
