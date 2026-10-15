class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});

        for (int i = 1; i < numRows; i++) {
            vector<int> row;
            vector<int>& prev = ans[i - 1];

            row.push_back(1);

            for (int j = 0; j < prev.size() - 1; j++) {
                row.push_back(prev[j] + prev[j + 1]);
            }

            row.push_back(1);
            ans.push_back(row);
        }

        return ans;
    }
};