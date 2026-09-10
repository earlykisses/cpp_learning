class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, bool> mp;

        // Store all numbers that appear
        for (int x : nums) {
            mp[x] = true;
        }

        vector<int> ans;

        // Check numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            if (mp.find(i) == mp.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};