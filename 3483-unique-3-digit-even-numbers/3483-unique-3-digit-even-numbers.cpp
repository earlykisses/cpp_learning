class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_map<int, int> freq;

        // Store frequency of each digit
        for (int d : digits) {
            freq[d]++;
        }

        int ans = 0;

        // Check all 3-digit numbers
        for (int num = 100; num <= 998; num += 2) {

            int x = num;

            int c = x % 10;
            x /= 10;

            int b = x % 10;
            x /= 10;

            int a = x;

            // Check if required digits are available
            unordered_map<int, int> need;

            need[a]++;
            need[b]++;
            need[c]++;

            bool possible = true;

            for (auto [digit, count] : need) {
                if (freq[digit] < count) {
                    possible = false;
                    break;
                }
            }

            if (possible) {
                ans++;
            }
        }

        return ans;
    }
};