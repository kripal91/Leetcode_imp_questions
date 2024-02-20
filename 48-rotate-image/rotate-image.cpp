class Solution {
public:
    void rotate(vector<vector<int>>& A) {
         int M = A.size();
        int N = A[0].size();
        vector<vector<int>> B(N, vector<int>(M, 0));
        for (int j = 0; j < N; j++){
            for (int i = 0; i < M; i++){
                B[j][i] = A[i][j];
            }
        }
        for(int i=0;i<B.size();i++){
            reverse(B[i].begin(),B[i].end());
        }
        A=B;
    }
};