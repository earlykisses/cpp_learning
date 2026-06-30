class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;

        // Count frequency of each character
        for (char ch : s) {
            freq[ch]++;
        }

        int ans = 0;
        bool odd = false;

        // Calculate maximum palindrome length
        for (auto it : freq) {
            if (it.second % 2 == 0) {
                ans += it.second;
            } else {
                ans += it.second - 1;
                odd = true;
            }
        }

        // Add one odd character in the center
        if (odd)
            ans++;

        return ans;
    }
};
