class Solution {
public:
    int minimumDeletions(string s) {
        int aCountRight = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a') {
                aCountRight++;
            }
        }

        int bCountLeft = 0;
        int ans = aCountRight;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a') {
                aCountRight--;
            } else {
                bCountLeft++;
            }
            ans = min(ans, aCountRight + bCountLeft);
        }

        return ans;
    }
};

