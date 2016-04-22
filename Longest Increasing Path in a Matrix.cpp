class Solution {
public:
    
    int walk(vector<vector<int>>& log,vector<vector<int>>& matrix,int x,int y,int la){
        if(x<0 || x>=matrix.size()){
            return 0;
        }
        if(y<0 || y>=matrix[x].size()){
            return 0;
        }
        if(log[x][y]!=0)return log[x][y];
        //cout << x << " " << y << endl;
        vector<int> las;
        int n = matrix[x][y];
        if(x-1>=0 && matrix[x-1][y]<n)las.push_back(walk(log,matrix,x-1,y,la+1));
        if(x+1<matrix.size() && matrix[x+1][y]<n)las.push_back(walk(log,matrix,x+1,y,la+1));
        if(y-1>=0 && matrix[x][y-1]<n)las.push_back(walk(log,matrix,x,y-1,la+1));
        if(y+1<matrix[x].size() && matrix[x][y+1]<n)las.push_back(walk(log,matrix,x,y+1,la+1));
        if(las.empty()){
            return 0;}
        int r  = *max_element(las.begin(),las.end()) + 1;
        log[x][y] =r ;
        return r;
        
        
    }



    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if(matrix.empty())return 0;
        vector<vector<int>> log(matrix.size(),vector<int>(matrix[0].size(),0));
        int x = 0;
        for(int i = 0;i<matrix.size();++i){
            for(int j =0;j<matrix[i].size();++j){
                int y = walk(log,matrix,i,j,0);
                //cout << i <<"," << j<<" " << y << endl;
                x = x>y?x:y;
            }
        }
//        for(auto a:log){
//            for(auto b:a){
//                cout << b << " ";
//            }
//            cout << endl;
//        }
        
        return x+1;
    }
};
