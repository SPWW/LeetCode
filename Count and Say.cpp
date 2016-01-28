class Solution {
public:
    string countAndSay(int n) {
        string temp("1");
        for(int i = 1;i<n;i++){
            string s;
            char x = ' ';
            int c = 0;
            for(int j=0;j<temp.size();j++){
                if(x==' '){
                    x = temp.at(j);
                    c++;
                }else{
                    if(temp.at(j)==x){
                        c++;
                    }else{
                        s+= to_string(c)+x;
                        c=1;
                        x=temp.at(j);
                    }
                }
            }
            s+= to_string(c)+x;
            temp = s;
        }
        return temp;
    }
};
