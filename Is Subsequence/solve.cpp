class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while (i < t.size()) {
            if (t[i] == s[j]) {
                i++;
                j++;
                if (j == s.size()) {
                    return true;
                }
            }
             else {
                i++;
            }
        }
        return j == s.size();
    }
};
