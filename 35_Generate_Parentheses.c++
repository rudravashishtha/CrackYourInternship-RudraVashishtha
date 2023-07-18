class Solution {
public:
    void backtrack(vector<string>& result, string& collection, int opened, int closed) {
        if (opened == 0 && closed == 0) {
            result.push_back(collection);
            return;
        }

        if (opened > 0) {
            collection.push_back('(');
            backtrack(result, collection, opened - 1, closed);
            collection.pop_back();
        }

        if (closed > opened) {
            collection.push_back(')');
            backtrack(result, collection, opened, closed-1);
            collection.pop_back();

        }
    }
    vector<string> generateParenthesis(int n) {
        string collection;
        vector<string> result;

        backtrack(result, collection, n, n);
        return result;

    }
};
