class Solution {
public:
    bool isPalindrome(string s) {
        string temps;
        for(auto each:s){
           // cout << each << endl;
            if(each>96 && each < 123){
                temps+=each;
            }else if(each >64 && each < 91){
                temps+=(each+32);
            }else if(each > 47 && each < 58){
                temps+=(each);
            }
        }
        int i = 0;
        int j = temps.size()-1;
        while(i<j){
               // cout << i << " " << j << endl;
                //cout << temps.at(i) << " " << temps.at(j) << endl;
            if(temps.at(i)!=temps.at(j)){
                return false;
            }
            ++i;
            --j;
        }
        return true;
    }
};
