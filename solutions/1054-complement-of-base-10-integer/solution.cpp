class Solution {
public:
    int bitwiseComplement(int n) {
        int m = 0;

        if (n == 0) {
            return 1;
        } else {
            while (m < n) {
                m = (m << 1) | 1;
            }
            return n ^ m;
        }
    }
};
