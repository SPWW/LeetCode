class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();++i){
            set<char> has1;
            set<char> has2;
            for(int j=0;j<board.size();++j){
                
                if(board[i][j]!='.'){
                    if(board[i][j]<='0' || board[i][j]>'9')return false;
                    if(has1.find(board[i][j])!=has1.end() ){
                        return false;
                    }else{
                        has1.insert(board[i][j]);
                    }
                }
                if(board[j][i]!='.'){
                    if(board[j][i]<'1' || board[j][i]>'9')return false;
                    if(has2.find(board[j][i])!=has2.end()){
                        return false;
                    }else{
                        has2.insert(board[j][i]);
                    }
                }

           
                if((i==1 ||i==4 || i==7) &&(j==1||j==4||j==7) ){
                    set<char> has3;
                    for(int h=i-1;h<=i+1;++h){
                        for(int k=j-1;k<=j+1;++k){
                            if(board[h][k]!='.'){
                                if(board[h][k]<='0' || board[h][k]>'9')return false;
                                if(has3.find(board[h][k])!=has3.end() ){
                                    return false;
                                }else{
                                    has3.insert(board[h][k]);
                                }
                            }
                        }
                    }
                    
                    
                    
                }
           
           
           
            }
        }
        
        return true;
        
        
    }
};
