class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        // Hash table: key -> value
        unordered_map<string, string> mp;

        // Store all knowledge in hash table
        for (auto &k : knowledge) {
            mp[k[0]] = k[1];
        }

        string ans;

        for (int i = 0; i < s.length(); i++) {

            // Start of a bracket pair
            if (s[i] == '(') {

                string key;
                i++;  // move after '('

                // Extract key until ')'
                while (s[i] != ')') {
                    key += s[i];
                    i++;
                }

                // Check if key exists in hash table
                if (mp.find(key) != mp.end()) {
                    ans += mp[key];
                } else {
                    ans += '?';
                }

            } else {
                // Normal character
                ans += s[i];
            }
        }

        return ans;
    }
};