class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        int n = nums.size();

        // dp[i] = length of LIS ending at index i
        vector<int> dp(n, 1);

        int ans = 1;

        for (int i = 0; i < n; i++) {

            // Check all previous elements
            for (int j = 0; j < i; j++) {

                // nums[j] can come before nums[i]
                if (nums[j] < nums[i]) {

                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }

            ans = max(ans, dp[i]);
        }

        return ans;
    }
};