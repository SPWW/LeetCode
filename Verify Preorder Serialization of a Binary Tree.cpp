class Solution {
public:
    bool isValidSerialization(string preorder) {
        istringstream is(preorder);
        int node_num = 0;
        int null_num = 0;
        vector<string> factors;
        string temp;
        while(getline(is,temp,','))factors.push_back(temp);
        for(int i = 0;i<factors.size();++i){
            if(factors.at(i)!="#")node_num++;
            else null_num++;
            if(null_num == node_num+1 && i!=factors.size()-1)return false;
        }
        return node_num == null_num-1;
    }
};
