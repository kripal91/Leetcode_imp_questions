class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(i==0 ? nums[i]: nums[i]+ans[i-1]);
        }
        return ans;
    }
};