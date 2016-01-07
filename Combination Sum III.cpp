class Solution {
public:
    vector<vector<int>> ret;
    void walk(int k,int n,vector<int> v){
        if(k<1)return;
        if(k==1){
            if(find(v.begin(),v.end(),n)==v.end()){
                if(n<=0||n>9||n<v.at(v.size()-1))return;
                v.push_back(n);
                //sort(v.begin(),v.end());
                if(find(ret.begin(),ret.end(),v)==ret.end())ret.push_back(v);
                return;
            }else{
                return;
            }
        }
        int i;
        if(!v.empty()){
            i=v.at(v.size()-1);
        }else{
            i=1;
        }
        for(;i<=9;i++){
            if(find(v.begin(),v.end(),i)==v.end()){
                //cout << k << "---" << i << endl;
                vector<int> tv(v);
                tv.push_back(i);
                walk(k-1,n-i,tv);
            }
        }
        return;
    }
    

    vector<vector<int>> combinationSum3(int k, int n) {
         vector<int> vec;
         walk(k,n,vec);
         return ret;
    }
};
