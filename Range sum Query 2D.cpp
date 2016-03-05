class NumMatrix {
public:
    vector<vector<int>> line_sum;
    NumMatrix(vector<vector<int>> &matrix) {
        for(auto& line:matrix){
            vector<int> temp_line_sum;
            int sum = 0;
            for(int i = 0;i<line.size();++i){
                sum+=line.at(i);
                temp_line_sum.push_back(sum);
            }
            line_sum.push_back(temp_line_sum);
        }
        
        
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int i = row1;i<=row2;++i){
            if(col1>0){
                sum += line_sum[i][col2]-line_sum[i][col1-1];
            }else{
                sum += line_sum[i][col2];
            }
        }
        return sum;
    }
};


// Your NumMatrix object will be instantiated and called as such:
// NumMatrix numMatrix(matrix);
// numMatrix.sumRegion(0, 1, 2, 3);
// numMatrix.sumRegion(1, 2, 3, 4);
