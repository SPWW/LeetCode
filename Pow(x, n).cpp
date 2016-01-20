class Solution {
public:
    map<int,double> log;
    double myPow(double x, int n) {
        //cout << n << endl;
        if(x==1)return 1;
        if(x==-1){
            if(n%2==0)return 1;
            return -1;
        }
        if(n==2)return x*x;
        if(n==1)return x;
        if(n==0)return 1;
        if(n<0)return 1/(myPow(x,-n));
        if(log.find(n)!=log.end()){
            return log.find(n)->second;
        }else{
            double x1= myPow(x,n/2)*myPow(x,n/2)*myPow(x,n%2);
            log[n]=x1;
            return x1;
        }

    }
};
