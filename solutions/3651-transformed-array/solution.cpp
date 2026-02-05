class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                result[i] = 0;
            } else {
                long long shft = nums[i];
                long long idx = ( (long long)i + shft ) % n;
                if (idx < 0) idx += n;
                result[i] = nums[idx];
            }
        }
        return result;
    }
};

