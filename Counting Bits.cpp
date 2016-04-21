class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ret;
        int bits = 0;
        ret.push_back(bits);
        for(int i = 1;i<=num ;++i){
            if(i-1 & 1 == 0){
                bits+=1;
            }else{
                int k = 0;
                int l = i-1;
                while(l&1 != 0){
                    k++;
                    l = l >> 1;
                }
                bits-=k;
                bits+=1;
            }
            ret.push_back(bits);
        }
        return ret;
    }
};
