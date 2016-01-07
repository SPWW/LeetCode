class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        for(int i = 0;i< board.size();++i){
            for(int j = 0;j<board[0].size();++j){
                int count = 0;
                for(int k = max(0,i-1);k<=min(static_cast<int>(board.size()-1),i+1);++k){
                    for(int h = max(0,j-1);h<=min(static_cast<int>(board[0].size()-1),j+1);++h){
                        if(h!=j || k!=i){
                            if(board[k][h]&1 == 1){
                                ++count;
                            }
                        }
                    }
                }
            
                if(board[i][j]&1==1){
                    if(count == 2 || count == 3){
                        board[i][j] |= 2;
                    }
                }else{
                    if(count == 3){
                        board[i][j] |= 2;
                    }
                }
                
            }
        }
        for(int i = 0;i< board.size();++i){
            for(int j = 0;j<board[0].size();++j){
                board[i][j] = board[i][j]>>1;
            }
        }
    }
};
