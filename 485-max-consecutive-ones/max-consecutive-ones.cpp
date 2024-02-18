class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // iterative approach
        // int n=nums.size();
        // int ans=0;
        // for(int l=0;l<n;l++){
        //     int no_of_zeros=0;
        //     for(int r=l;r<n;r++){
        //         if(nums[r]==0) no_of_zeros++;
        //         if(no_of_zeros==0)
        //         ans=max(ans,r-l+1);
        //     }
        // }
        // return ans;

        // optimal approach
        int n=nums.size();
        int ans=0,cur=0;
        for(int i=0;i<n;i++){
            nums[i]==0 ? cur=0 : cur++;
            ans=max(ans,cur);
        }
        return ans;
    }
};