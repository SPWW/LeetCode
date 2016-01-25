// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int right = n;
        int left = 1;
        while(left < right){
            int x = left+(right-left)/2;
            if(x==left)break;
            if(isBadVersion(x)){
                right = x;
            }else{
                left = x;
            }
        }

        return isBadVersion(left)?left:right;
    }
};
