class Solution {
public:
    // Method 1
    void helper(int i, int n, int k, vector<int>& subset, vector<vector<int>>& ans) {
        if (k == 0) {
            ans.push_back(subset);
            return;
        }
        if (i > n) return;
        // Take the ith element
        subset.push_back(i);
        helper(i+1, n, k-1, subset, ans);

        // skip the ith element
        subset.pop_back();
        helper(i+1, n, k, subset, ans);
    }

    // Method 2
    void combineUtil(int start, int n, int k, vector<int>& current, vector<vector<int>>& result) {
        if (current.size() == k) {
            result.push_back(current);
            return;
        }

        for (int i = start; i <= n; i++) {
            current.push_back(i);
            combineUtil(i+1, n, k, current, result);
            current.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> subset;
        vector<vector<int>> result;

        // helper(1, n, k, subset, ans);
        combineUtil(1, n, k, subset, result);

        return result;
    }
};
