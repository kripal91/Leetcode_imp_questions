class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ans=0;
        for(auto& val:hours)
        if(val>=target)
        ans++;
        return ans;
    }
};