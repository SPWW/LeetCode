class Solution {
public:
    bool isAdditiveNumber(string num) {
        if(num.size()<3)return false;
        vector<pair<long,long>> fands;
        long first_num = 0;
        long second_num = 0;
        for(int i = 1;i<(num.size());++i){
            for(int j = i+1;j<(num.size());++j){
                long temp1 = atol(num.substr(0,i).c_str());
                long temp2 = atol(num.substr(i,j-i).c_str());
                long s = temp1+temp2;
                //cout << temp1 << " " << temp2 << endl;
                if(num.substr(j,num.size()-j).find(to_string(s)) == 0){
                    first_num = temp1;
                    second_num = temp2;
                    fands.push_back(pair<long,long>(first_num,second_num));
                }
            }

        }
        if(fands.empty())return false;
        for(auto p:fands){
            first_num = p.first;
            second_num = p.second;
            cout << first_num << " -- " << second_num << endl;
            string temp_str = to_string(first_num)+to_string(second_num);
            //cout << first_num << " " << second_num << " " << temp_str << endl;
            while(temp_str.size()<num.size()){
                long temp_s = first_num + second_num;
                first_num = second_num;
                second_num = temp_s;
                temp_str+=to_string(temp_s);
            }
            //cout << temp_str << endl;
            if(temp_str.find(num)== 0){
                return true;
            }
        }
        return false;
    }
};
