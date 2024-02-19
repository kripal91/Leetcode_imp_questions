class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
          int n = nums.size();
        vector<int> H(n + 1, 0); // Initialize vector of size n+1 with all elements 0
        for(int i = 0; i < n; i++) {
            H[nums[i]]++;
        }
        vector<int> ans;
        for(int i = 1; i <= n; i++) {
            if(H[i] == 0)
                ans.push_back(i);
        }
        return ans;
    }
};