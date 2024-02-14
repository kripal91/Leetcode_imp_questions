class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || 
            (s[i]>='0' && s[i]<='9'))
            temp.push_back(s[i]);
        }
        string t1= temp;
        transform(t1.begin(),t1.end(),t1.begin(),::tolower);
        transform(temp.begin(),temp.end(),temp.begin(),::tolower);
        reverse(t1.begin(),t1.end());
        return t1==temp;
    }
};