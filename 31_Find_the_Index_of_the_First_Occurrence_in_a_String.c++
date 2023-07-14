class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        int foundIndex = haystack.find(needle);
        return (foundIndex != string::npos) ? foundIndex : -1;
    }
};
