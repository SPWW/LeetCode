class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ret(n,vector<int>(n,0));
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = n-1;
        int x = 1;
        int total = pow(n,2);
        while(x<=total){
            for(int i= left;i<=right;i++){
                ret[top][i] = x;
                ++x;
            }
            ++top;
            for(int i=top;i<=bottom;++i){
                ret[i][right] = x;
                ++x;
            }
            --right;
            for(int i=right;i>=left;--i){
                ret[bottom][i] = x;
                ++x;
            }
            --bottom;
            for(int i=bottom;i>=top;--i){
                ret[i][left]=x;
                ++x;
            }
            ++left;
        }
        
        return ret;
    }
};
