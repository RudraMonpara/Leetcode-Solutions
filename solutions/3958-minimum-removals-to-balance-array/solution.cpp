class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int l = 0;
        int max_len = 1;
        for(int r = 0; r < n; r++){
            while(l <= r && (long long)nums[r] > (long long)nums[l] * k) l++;
            max_len = max(max_len, r - l + 1);
        }
        return n - max_len;
    }
};
