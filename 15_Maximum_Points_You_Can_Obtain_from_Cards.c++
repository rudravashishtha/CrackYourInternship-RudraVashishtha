class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int totalPoints = 0;
        int windowSize = n - k;
        int minSum = INT_MAX;
        int currentSum = 0;

        for (int i = 0; i < n; i++) {
            totalPoints += cardPoints[i];
            
            if (i < windowSize) {
                currentSum += cardPoints[i];
            } else {
                currentSum += cardPoints[i] - cardPoints[i - windowSize];
            }
            
            if (i >= windowSize - 1) {
                minSum = min(minSum, currentSum);
            }
        }

        return totalPoints - minSum;
    }
};
