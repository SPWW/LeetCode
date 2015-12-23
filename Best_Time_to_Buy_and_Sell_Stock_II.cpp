class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0){
            return 0;
        }
        
        
        int max = 0;
        
        for(auto it=prices.begin()+1;it != prices.end();it++){
            max += (*it-*(it-1))>0?(*it-*(it-1)):0;
        }
        
        return max;
        
    }
};
