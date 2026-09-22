class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> ans(n);

        int prev = -n;

        for (int i = 0; i < n; i++) {
            if (s[i] == c)
                prev = i;

            ans[i] = i - prev;
        }

        int next = 2 * n;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == c)
                next = i;

            ans[i] = min(ans[i], next - i);
        }

        return ans;
    }
};