class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int window=0;
        int ans= n + 1;
        int l=0;
        for(int r=0;r<n;r++){
            window += nums[r];

            while(window >=target){
                ans = min(ans, r-l+1);
                window -= nums[l++];
            }

        }
        return ans == n + 1 ? 0 : ans;
    }
};
