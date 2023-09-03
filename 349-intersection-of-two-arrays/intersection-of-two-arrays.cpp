class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int> temp;
         vector<int> ans;

        for(auto v1:nums1)
        temp.insert(v1);
        
        for(auto v2:nums2)
        {
            auto it=temp.find(v2);
            if(it!=temp.end())
            {
                ans.push_back(*it);
                temp.erase(it);
            }
        }
        
        return ans;
    }
};