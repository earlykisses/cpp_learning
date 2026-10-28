class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        vector<int> ans;
        for (auto& arr : mp) {
            if (arr.second == 1) {
                ans.push_back(arr.first);

                if (ans.size() == 2) {
                    break;
                }
            }
        }

        return ans;
    }
};