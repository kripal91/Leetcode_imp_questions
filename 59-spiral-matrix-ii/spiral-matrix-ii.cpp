class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0,top=0,right=n-1,bottom=n-1;
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int k=1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++)
            matrix[top][i]=k++;
            top++;
            for(int i=top;i<=bottom;i++)
            matrix[i][right]=k++;
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--)
                matrix[bottom][i]=k++;
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--)
                matrix[i][left]=k++;
                left++;
            }
        }
        return matrix;
        
    }
};