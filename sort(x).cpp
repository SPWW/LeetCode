class Solution {
public:
	int step(double x,int k){
		double n = 0.5*(x+k/x);
		if((int)x==(int)n)return n;
		return step(n,k);
	}
    int mySqrt(int x) {
        if(x==0)return 0;
        return static_cast<int>(step(1,x));
    }
};
