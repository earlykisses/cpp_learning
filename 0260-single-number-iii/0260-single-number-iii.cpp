class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        int xorAll = 0;

        // XOR all elements
        for (int num : nums) {
            xorAll ^= num;
        }

        // Find any bit where the two unique numbers differ
        int diffBit = 1;

        while ((xorAll & diffBit) == 0) {
            diffBit = diffBit << 1;
        }

        int a = 0;
        int b = 0;

        // Divide into two groups
        for (int num : nums) {

            if (num & diffBit) {
                a ^= num;
            }
            else {
                b ^= num;
            }
        }

        return {a, b};
    }
};