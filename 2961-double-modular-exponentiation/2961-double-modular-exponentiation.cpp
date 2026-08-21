class Solution {
public:
    // Calculates (x^n) % mod using Binary Exponentiation
    long long power(long long x, long long n, long long mod) {
        long long result = 1;

        while (n > 0) {
            if (n & 1) {
                result = (result * x) % mod;
            }

            x = (x * x) % mod;
            n = n >> 1;
        }

        return result;
    }

    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> ans;

        for (int i = 0; i < variables.size(); i++) {
            int a = variables[i][0];
            int b = variables[i][1];
            int c = variables[i][2];
            int m = variables[i][3];

            // First: (a^b) % 10
            long long first = power(a, b, 10);

            // Second: (first^c) % m
            long long second = power(first, c, m);

            if (second == target) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};