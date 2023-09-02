class Solution {
public:
    int countPrimes(int n) {
        // sieve of eractorthesis
        int cnt=0;
        vector<int> arr(n);
        for(int i=2;i*i<n;i++){
            if(arr[i]==0){
                for(int j=i*i;j<n;j+=i)
                arr[j]=1;
            }
        }
        for(int i=2;i<n;i++)
        if(arr[i]==0)
        cnt++;
        return cnt;
    }
};