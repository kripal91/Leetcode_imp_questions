class Solution {
public:
    int countAsterisks(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*')
            cnt++;
        }
        int t=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='|'){
                int l=i,r=i+1;
                while(s[r]!='|' && r!= s.size()){
                    if(s[r]=='*')
                    t++;
                    r++;    
                }
                i=r;
            }
            else 
            continue;
        }
        return cnt-t;
    }
};