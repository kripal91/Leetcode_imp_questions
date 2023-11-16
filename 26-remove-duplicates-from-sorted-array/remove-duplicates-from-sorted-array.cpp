class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans;
        int k=1;
        int n=nums.size();
        // nums[k++]=nums[0];
        for(int i=1;i<n;i++){
            if(nums[k-1]!=nums[i])
            nums[k++]=nums[i];
        }
        return k;

    }
};