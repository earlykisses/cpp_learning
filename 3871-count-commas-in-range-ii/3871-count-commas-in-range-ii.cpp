class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

        // Numbers with 4 to 6 digits have 1 comma
        // 7 to 9 digits have 2 commas
        // 10 to 12 digits have 3 commas, etc.
        
        long long start = 1000;
        long long commas = 1;

        while (start <= n) {
            long long end = min(n, start * 1000 - 1);

            ans += (end - start + 1) * commas;

            start *= 1000;
            commas++;
        }

        return ans;
    }
};