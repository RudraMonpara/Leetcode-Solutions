class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int x = left; x <= right; x++) {
            int bits = __builtin_popcount(x);
            if (isPrime(bits))
                ans++;
        }
        return ans;
    }
};
