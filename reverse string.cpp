class Solution {
public:
    string reverseString(string s) {
        string temp;
        for(int i = 0;i<s.size()/2;++i){
            temp = s.at(i);
            s.at(i) = s.at(s.size()-1-i);
            s.at(s.size()-1-i)=temp.at(0);
        }
        return s;
    }
};
