class Solution {
public:
    string simplifyPath(string path) {
        vector<string> files;
        stringstream ss(path);
        string file;

        while (getline(ss, file, '/')) {
            if (!files.empty() && file == "..") {
                files.pop_back();
            }
            else if (file != "" && file != ".." && file != ".") {
                files.push_back(file);
            }
        }

        string simple_path = "";
        for (string file: files) {
            simple_path += "/" + file;
        }

        return simple_path.empty() ? "/" : simple_path;
    }
};
