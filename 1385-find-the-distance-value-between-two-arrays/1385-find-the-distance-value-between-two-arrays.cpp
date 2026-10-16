class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int count = 0;

        for (int x : arr1) {
            int idx = lower_bound(arr2.begin(), arr2.end(), x) - arr2.begin();
            bool valid = true;

            if (idx < arr2.size() && abs(arr2[idx] - x) <= d) {
                valid = false;
            }

            if (idx > 0 && abs(arr2[idx - 1] - x) <= d) {
                valid = false;
            }

            if (valid) {
                count++;
            }
        }

        return count;
    }
};