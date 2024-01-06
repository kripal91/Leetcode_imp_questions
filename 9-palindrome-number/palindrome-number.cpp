class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        int n=str.size();
        int l=0,r=n-1;
        while(l<r){
            if(str[l]==str[r]){
                l++; r--;
            }
            else
            return false;
        }
        return true;
        
    }
};