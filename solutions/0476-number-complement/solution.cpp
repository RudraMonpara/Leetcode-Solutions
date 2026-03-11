class Solution {
public:
    int findComplement(int num) {
        int m = 0;

        if (num == 0) {
            return 1;
        } else {
            while (m < num) {
                m = (m << 1) | 1;
            }
            return num ^ m;
        }
    }
};
