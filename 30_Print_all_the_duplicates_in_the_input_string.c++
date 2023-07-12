void printDuplicates(const string& input) {
    unordered_map<char, int> frequencyMap;

    // Count the frequency of each character
    for (char c : input) {
        frequencyMap[c]++;
    }

    // Print duplicates and their counts
    for (const auto& pair : frequencyMap) {
        if (pair.second > 1) {
            cout << "Character: " << pair.first << ", Count: " << pair.second << endl;
        }
    }
}

int main() {
    string input = "hello world";
    printDuplicates(input);
    return 0;
}
