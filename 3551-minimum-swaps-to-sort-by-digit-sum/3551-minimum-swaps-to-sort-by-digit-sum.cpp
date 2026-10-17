class Solution {
public:
    int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({digitSum(nums[i]), nums[i]});
        }

        sort(arr.begin(), arr.end());

        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]] = i;
        }

        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == arr[i].second) {
                continue;
            }

            swaps++;

            int j = mp[arr[i].second];

            mp[nums[i]] = j;
            mp[arr[i].second] = i;

            swap(nums[i], nums[j]);
        }

        return swaps;
    }
};