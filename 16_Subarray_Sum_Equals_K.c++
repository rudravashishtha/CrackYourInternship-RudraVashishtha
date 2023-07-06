class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;

        unordered_map<int, int> freq;
        freq[0] = 1;

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int remSum = sum - k;
            if (freq.count(remSum)) {
                ans += freq[remSum];
            }
            freq[sum]++;
        }
        return ans;
    }
};
