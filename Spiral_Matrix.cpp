class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ret;
        if(matrix.size()<1)return ret;
        int top = 0;
        int bottom = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size()-1;
        int x = 1;
        int total = matrix.size()*matrix[0].size();
        while(x<=total){
            for(int i= left;i<=right;i++){
                ret.push_back(matrix[top][i]);
                ++x;
            }
            ++top;
            for(int i=top;i<=bottom;++i){
                ret.push_back(matrix[i][right]);
                ++x;
            }
            --right;
            for(int i=right;i>=left;--i){
                ret.push_back(matrix[bottom][i]);
                ++x;
            }
            --bottom;
            for(int i=bottom;i>=top;--i){
                ret.push_back(matrix[i][left]);
                ++x;
            }
            ++left;
        }
        
        return ret;
    
    }
};
