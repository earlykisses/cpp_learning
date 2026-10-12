class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> count;

        for (int i = 0; i < n; i++) {
            count[nums[i]]++;
        }

        for (int i = 0; i <= n; i++) {
            if (count[i] == 0) {
                return i;
            }
        }

        return -1;
    }
};