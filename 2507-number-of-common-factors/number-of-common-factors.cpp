class Solution {
public:
    int commonFactors(int a, int b) {
        int min= (a<=b)?a:b;
        int max= (a>=b)?a:b;
        int cnt=0;
        for(int i=1;i<=min;i++){
            if(!(min%i) && !(max%i))
              cnt++;
        }
        return cnt;
    }
};