// Time Complexity - O(n^2) 
// -> Won't work in LeetCode
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int maxArea = 0;
        for (int l = 0; l < n; l++) {
            for (int r = l+1; r < n; r++) {
                int area = (r- l) * (min(height[l], height[r]));
                if (area > maxArea)
                    maxArea = area;
            }
        }
        return maxArea;
    }
};
