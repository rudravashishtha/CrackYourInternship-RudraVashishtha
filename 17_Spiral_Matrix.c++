class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiral;        
        if (matrix.empty()) return spiral;

        int n = matrix.size();
        int m = matrix[0].size();

        int left = 0, right = m - 1;
        int top = 0, bottom = n  - 1;
//             cols remaining | rows remaining
        while (left <= right && top <= bottom) {
            // Right Dir
            for (int i = left; i <= right; i++) {
                spiral.push_back(matrix[top][i]);
            }
            top++;

            // Bottom Dir
            for (int i = top; i <= bottom; i++) {
                spiral.push_back(matrix[i][right]);
            }
            right--;

            // Left Dir
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    spiral.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // Top Dir
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    spiral.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return spiral;
    }
};
