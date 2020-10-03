class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0)
            return vector<string> ();
        vector<vector<char> > vec = {
            {'a', 'b', 'c'},
            {'d', 'e', 'f'},
            {'g', 'h', 'i'},
            {'j', 'k', 'l'},
            {'m', 'n', 'o'},
            {'p', 'q', 'r', 's'},
            {'t', 'u', 'v'},
            {'w', 'x', 'y', 'z'},
        };
        vector<string> current = {""};
        for (char c : digits) {
            vector<string> temp;
            for (char now : vec[c-'2']) {
                for (string s : current) {
                    temp.push_back(s + now);
                }
            }
            current = temp;
        }
        return current;
    }
};