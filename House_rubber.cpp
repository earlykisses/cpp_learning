class Solution {
public:
    int solve(vector<int>& nums, int i, vector<int>& dp) {

        // Base case
        if (i >= nums.size()) {
            return 0;
        }

        // Already calculated
        if (dp[i] != -1) {
            return dp[i];
        }

        // Rob current house
        int rob = nums[i] + solve(nums, i + 2, dp);

        // Skip current house
        int skip = solve(nums, i + 1, dp);

        // Store answer
        dp[i] = max(rob, skip);

        return dp[i];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        vector<int> dp(n, -1);

        return solve(nums, 0, dp);
    }
};
