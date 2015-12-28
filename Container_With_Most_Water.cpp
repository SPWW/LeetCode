class Solution {
public:
    int maxArea(vector<int>& height) {
        int ret = 0;
        auto it = height.begin();
        auto ite = height.end()-1;
        while(it<ite){
            int h = min(*it,*ite);
            ret = max(ret,static_cast<int>(h*(ite-it)));
            if(*it < *ite){
                ++it;
            }else{
                --ite;
            }
        }
        return ret;
    }
};
