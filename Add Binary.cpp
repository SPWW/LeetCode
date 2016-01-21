class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int over = 0;
        int i=0;
        for(;i<(a.size()<b.size()?a.size():b.size());++i){
            int temp = (a.at(i)-48)+(b.at(i)-48)+over;
            //cout <<"-- "<< temp << " " << (a.at(i)-48)<< " " << (b.at(i)-48) <<" " << over<< endl;
            over = temp/2;
            int left = temp%2;
            ans+=to_string(left);
        }
        if(a.size()!=b.size()){
            string &s = a.size()>b.size()?a:b;
            for(;i<s.size();++i){
                int temp = (s.at(i)-48)+over;
                //cout <<"++ " << temp << " " << (s.at(i)-48)<<" " << over<< endl;
                over = temp/2;
                int left = temp%2;
                ans+=to_string(left);
    
            }
        }
        if(over>0){
            int temp = over;
            //cout <<"** " << temp << endl;
            over = temp/2;
            int left = temp%2;
            ans+=to_string(left);
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
