class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
        unordered_set<string> bannedSet;
        
        for (string word : banned) {
            bannedSet.insert(word);
        }
        
        unordered_map<string, int> freq;
        
        string word = "";
        
        for (int i = 0; i <= paragraph.size(); i++) {
            
            if (i < paragraph.size() && isalpha(paragraph[i])) {
                word += tolower(paragraph[i]);
            }
            else {
                if (!word.empty()) {
                
                    if (bannedSet.find(word) == bannedSet.end()) {
                        freq[word]++;
                    }
                    
                    word = "";
                }
            }
        }
        
        string ans = "";
        int maxFreq = 0;
        
        for (auto it : freq) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                ans = it.first;
            }
        }
        
        return ans;
    }
};