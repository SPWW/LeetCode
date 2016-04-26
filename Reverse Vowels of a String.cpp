class Solution {
public:
    string reverseVowels(string s) {
        int end = s.size();
        set<char> vowel = {'a','e','i','o','u','A','E','I','O','U'};
        for(int i = 0;i<end;++i){
            if(vowel.find(s.at(i))!=vowel.end()){
                for(;end>i;--end){
                    if(vowel.find(s.at(end-1))!=vowel.end()){
                        char temp = s.at(i);
                        s.at(i) = s.at(end-1);
                        s.at(end-1) = temp;
                        //cout << "l:" << i << " r:" << end-1 << endl;
                        --end;
                        break;
                    }
                }
            }
        }
        return s;
    }
};
