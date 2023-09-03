class Solution {
public:
    double myPow(double x, int n) {
        // without using pow function
        long N=abs(n);
        double ans=1;
        while(N){
            if(N&1)
            ans=ans*x;
            x=x*x;
            N>>=1;
        }
        if(n<0)
        return(1/ans);
        return ans;
    }
};