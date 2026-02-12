

class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            int cnt[26] = {0};
            for (int j = i; j < n; ++j) {
                cnt[s[j] - 'a']++;
                int freq = -1;
                bool valid = true;
                for (int k = 0; k < 26; ++k) {
                    if (cnt[k] > 0) {
                        if (freq == -1) {
                            freq = cnt[k];
                        } else if (cnt[k] != freq) {
                            valid = false;
                            break;
                        }
                    }
                }
                if (valid) {
                    res = max(res, j - i + 1);
                }
            }
        }
        return res;
    }
};

