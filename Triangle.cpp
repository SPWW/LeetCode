class Solution {
public:
    vector<vector<int>> memory;
    int helper(vector<vector<int>>& tran,int r,int c){
        if(r == tran.size()){
            return 0;
        }
        if(memory[r][c]!=0)return memory[r][c];

        int lv = helper(tran,r+1,c);
        int rv = helper(tran,r+1,c+1);
        int tsum = tran[r][c] + (lv<rv?lv:rv);
        memory[r][c] = tsum;
        return tsum;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        for(auto each:triangle){
            memory.push_back(vector<int>(each.size(),0));
        }
        
        
        return helper(triangle,0,0);
    }
};
