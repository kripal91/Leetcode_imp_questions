class Solution {
public:
    double myPow(double x, int n) {
        long N=abs(n);
        double ans= pow(x,N);
        if(n<0)
        ans=1/ans;
        return ans;
    }
};