class Solution {
public:
    int climbStairs(int n) {
       int last2[] = {1,1};
       for(int i=0;i<n;i++){
           last2[i%2] = last2[0]+last2[1];
       }
       return last2[n%2];
    }
};
