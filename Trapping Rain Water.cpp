class Solution {
public:

    int trap(vector<int>& height) {
            if(height.size()<3)return 0;
            vector<int> wl(height.size(),0);
            for(int i = 0;i<height.size();++i){
                int l = i;
                int r = i;
                for(--l;l>=0;--l){
                    if(height[l]>=height[i]){
                        ++l;
                        break;
                    }
                }
                if(l<0)l=i;
                
                for(++r;r<height.size();++r){
                    if(height[r]>=height[i]){
                        --r;
                        break;
                    }
                }
                if(r==height.size())r=i;
               
               // cout << l << " " << r << ":";
                cout << height[l] << " " << height[r]<< endl;
                for(int k = l;k<=r;++k){
                    if(wl[k]<height[i]){
                        wl[k]=height[i];
                    }
                }
                
            }
            
            int w = 0;
            for(int i = 0;i<height.size();++i){
                //cout << "++" << wl[i] << endl;
                w+=wl[i]-height[i];
            }
            
            return w;
    }
};
