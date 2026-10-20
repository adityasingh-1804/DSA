class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> f;
        unordered_map<char,int> g;
        int n = s.size();
        int m = t.size();
        for (int i = 0; i < n; i++) {
            f[s[i]]++;
        }
        for (int j = 0; j < m; j++) {
            g[t[j]]++;
        }
        if (f.size() != g.size()) {
            return false;
        }
        for (auto it : f) {
            if (it.second != g[it.first]) {
                return false;
            }
        }
        return true;
    }
};