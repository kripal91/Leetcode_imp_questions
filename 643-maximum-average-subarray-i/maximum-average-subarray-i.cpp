class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int s=0;
        for(int i=0;i<k;i++)
        s+=nums[i];
        int mx=s;
        for(int l=1,r=k;r<nums.size();r++,l++){
            s-=nums[l-1];
            s+=nums[r];
            mx= max(mx,s);
        }
        double a= mx;
        double ans= a/k;
        return ans;
    }
};