class Solution {
public:
    int ss = 0;
    map<int,int> log;
    int helper(const string s,int pos){
        //cout << "--- " << pos << endl;
        if(pos == ss){
            return 1;
        }
        if(s.at(pos) <'1')return 0;
        if(log.find(pos)!=log.end())return log[pos];
        int ret = 0;
        if(pos+1 < ss && ((s.at(pos)=='1') || (s.at(pos)=='2' && s.at(pos+1) < '7'))){
            //cout << "jump "<< atoi(temp.c_str()) << endl;
            ret += helper(s,pos+2);
        }
        ret += helper(s,pos+1);
        log[pos] = ret;
        return ret;
    }
    int numDecodings(string s) {

        if(s.size()<1)return 0;
        ss = s.size();
        int ret = helper(s,0);
        return ret;
    }
};
