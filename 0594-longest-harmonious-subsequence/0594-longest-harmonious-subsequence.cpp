class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int left = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            // Window difference is greater than 1
            while (nums[right] - nums[left] > 1) {
                left++;
            }

            // Difference must be exactly 1
            if (nums[right] - nums[left] == 1) {
                ans = max(ans, right - left + 1);
            }
        }

        return ans;
    }
};