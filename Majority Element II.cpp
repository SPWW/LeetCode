class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mymap;
        vector<int> ret;
        int tag = nums.size()/3;
        for(auto x:nums){
            if(mymap[x]==INT_MAX)continue;
            mymap[x]++;
            if(mymap[x]>tag){
                //cout << tag << "---" << mymap[x] << ":" << x << endl;
                ret.push_back(x);
                mymap[x] = INT_MAX;
            }
        }

        return ret;
    }
};
