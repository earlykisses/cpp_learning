class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int left = 0;

        for (int right = 0; right <= n; right++) {

            if (right == n || s[right] == ' ') {

                int i = left;
                int j = right - 1;

                while (i < j) {
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }

                left = right + 1;
            }
        }

        return s;
    }
};