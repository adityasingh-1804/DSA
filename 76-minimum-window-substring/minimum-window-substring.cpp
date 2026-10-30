class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char,int> g;
        unordered_map<char,int> f;

        int m = s.size();
        int n = t.size();

        if(n > m) return "";

        int low = 0;
        int count = 0;
        int minLen = INT_MAX;
        int start = 0;
        // Store frequency of characters in t
        for(int i = 0; i < n; i++) {
            g[t[i]]++;
        }
        // Sliding window
        for(int high = 0; high < m; high++) {
            f[s[high]]++;
            // Check required character frequency
            if(g[s[high]] > 0 && f[s[high]] <= g[s[high]]) {
                count++;
            }
            // Shrink the window
            while(count == n) {
                int len = high - low + 1;
                if(len < minLen) {
                    minLen = len;
                    start = low;
                }
                char ch = s[low];
                if(g[ch] > 0 && f[ch] == g[ch]) {
                    count--;
                }
                f[ch]--;
                low++;
            }
        }
        if(minLen == INT_MAX) {
            return "";
        }
        return s.substr(start, minLen);
    }
};