class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        if (n < m) return -1;
        
        sort(a.begin(), a.end());
        
        long long minDiff = INT_MAX;
        
        for (int i = 0; i+m-1 < n; i++) {
            int diff = a[i+m-1] - a[i];
            if (diff < minDiff)
                minDiff = diff;
        }
        return minDiff;
    }   
};
