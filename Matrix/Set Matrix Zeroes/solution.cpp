
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if (!matrix.size() || !matrix[0].size()) return;
        bool flag = false;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (!matrix[i][j]) {
                    if (!j) {
                        flag = true;
                        continue;
                    }
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        
        for(int i = matrix.size() - 1; i >= 0; i--) {
            for (int j = matrix[i].size() - 1; j >= 0; j--) {
                if (!j) {
                    if (flag) matrix[i][j] = 0;
                    continue;
                }
                if (!matrix[0][j] || !matrix[i][0]) matrix[i][j] = 0;
            }
        }
    }
};