class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // iterative approach
        int n=nums.size();
        int ans=0;
        for(int l=0;l<n;l++){
            int no_of_zeros=0;
            for(int r=l;r<n;r++){
                if(nums[r]==0) no_of_zeros++;
                if(no_of_zeros==0)
                ans=max(ans,r-l+1);
            }
        }
        return ans;
    }
};