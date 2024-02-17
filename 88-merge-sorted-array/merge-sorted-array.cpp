class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int k = m + n;
        vector<int> temp(k, 0);
        int p1 = 0, p2 = 0;
        k = 0;
        while (p1 < m && p2 < n) {
            if (num1[p1] < num2[p2]) {
                temp[k++] = (num1[p1++]);
            } else {
                temp[k++] = (num2[p2++]);
            }
        }
        while (p1 < m) {
            temp[k++] = (num1[p1++]);
        }
        while (p2 < n) {
            temp[k++] = (num2[p2++]);
        }
        num1.clear();
        for (auto &v : temp)
            num1.push_back(v);
    }
};
