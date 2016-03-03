class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        if(nums.empty())return false;
        vector<pair<long,int>> new_v;
        for(int i = 0;i<nums.size();++i){
            new_v.push_back(make_pair(static_cast<long>(nums.at(i)),i));
        }
        sort(new_v.begin(),new_v.end());
        
        for(int i =0;i<new_v.size()-1;++i){
            for(int j = i+1;j<new_v.size();++j){
                #if 0
                cout << new_v.at(i).first << "_" << new_v.at(i).second << " " << new_v.at(j).first  << "_" << new_v.at(j).second<< endl;
                cout << abs(new_v.at(i).first-new_v.at(j).first) << ":" << t << "----" << abs(new_v.at(i).second-new_v.at(j).second) << ":" << k << endl;
                #endif
                if(abs(new_v.at(i).first-new_v.at(j).first)<=t && abs(new_v.at(i).second-new_v.at(j).second)<=k){
                    return true;
                }else if(abs(new_v.at(i).first-new_v.at(j).first)>t){
                    break;
                }
            }
        }
        return false;
    }
};
