class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag=0;
        int i=digits.size()-1;
        for(;i>=0;i--){
            if(digits[i]==9){
                flag=1;
                digits[i]=0;
            }
            else{
                digits[i]++;
                break;
            }
        }
        if(i==-1)
        digits.insert(digits.begin(),1);
        return digits;
    }
};