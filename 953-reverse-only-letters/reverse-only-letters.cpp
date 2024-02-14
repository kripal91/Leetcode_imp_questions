class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (((s[l] >= 'A' && s[l] <= 'Z') || (s[l] >= 'a' && s[l] <= 'z')) && 
                ((s[r] >= 'A' && s[r] <= 'Z') || (s[r] >= 'a' && s[r] <='z'))) {
                swap(s[l], s[r]);
                l++;
                r--;
            } else if (((s[l] >= 'A' && s[l] <= 'Z') || (s[l] >= 'a' && s[l] <= 'z')) && 
                       !((s[r] >= 'A' && s[r] <= 'Z') || (s[r] >= 'a' && s[r] <= 'z'))) {
                r--;
            } else if (!((s[l] >= 'A' && s[l] <= 'Z') || (s[l] >= 'a' && s[l] <= 'z')) && 
                       ((s[r] >= 'A' && s[r] <= 'Z') || (s[r] >= 'a' && s[r] <= 'z'))) {
                l++;
            } else {
                l++;
                r--;
            }
        }
        return s;
    }
};
