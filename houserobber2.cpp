class Solution {
public:

    int solve(vector<int>& nums, int i, int end, vector<int>& dp) {

        // Base case
        if (i > end) {
            return 0;
        }

        // Already calculated
        if (dp[i] != -1) {
            return dp[i];
        }

        // Rob current house
        int rob = nums[i] + solve(nums, i + 2, end, dp);

        // Skip current house
        int skip = solve(nums, i + 1, end, dp);

        dp[i] = max(rob, skip);

        return dp[i];
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        if (n == 1) {
            return nums[0];
        }

        // Case 1: 0 to n-2
        vector<int> dp1(n, -1);
        int case1 = solve(nums, 0, n - 2, dp1);

        // Case 2: 1 to n-1
        vector<int> dp2(n, -1);
        int case2 = solve(nums, 1, n - 1, dp2);

        return max(case1, case2);
    }
};
