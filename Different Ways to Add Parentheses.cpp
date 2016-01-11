class Solution {
public:
    vector<int> ret;
    void helper(vector<char> ops,vector<int> nums,int k){
        //cout << "------in-----" << endl;
       // for(auto each:ops)cout << each<<" ";cout << endl;
       // for(auto each:nums)cout << each<<" ";cout << endl;
        if(ops.size()==0){
            ret.push_back(nums.at(0));
            return;
        }
        
        for(int i=k-1>0?k-1:0;i<ops.size();++i){
            vector<char> tops(ops);
            vector<int> tnums(nums);
            
            char op(tops.at(i));
            tops.erase(tops.begin()+i);
            int temp = 0;
            if(op=='+'){
                temp = tnums.at(i) + tnums.at(i+1);
                tnums[i] = temp;
                tnums.erase(tnums.begin()+i+1);
            }else if(op == '-'){
                temp = tnums.at(i) - tnums.at(i+1);
                tnums[i] = temp;
                tnums.erase(tnums.begin()+i+1);
            }else if(op == '*'){
                temp = tnums.at(i) * tnums.at(i+1);
                tnums[i] = temp;
                tnums.erase(tnums.begin()+i+1);
            }
            helper(tops,tnums,i);
            

        }
        
        return;
    }


    vector<int> diffWaysToCompute(string input) {
        vector<char> ops;
        vector<int>  nums;
        int last = 0;
        for(int i = 0;i<=input.size();++i){
            if(i == input.size() || input[i]=='-' || input[i]=='+' || input[i]=='*'){
                if(i==input.size()){
                    nums.push_back(atoi(input.substr(last,i-last).c_str()));
                }else{
                    ops.push_back(input[i]);
                    nums.push_back(atoi(input.substr(last,i-last+1).c_str()));
                }
                last=i+1;
            }
        }
        //for(auto each:ops)cout << each;cout << endl;
       // for(auto each:nums)cout << each;cout << endl;
        helper(ops,nums,0);
        return ret;
    }
};
