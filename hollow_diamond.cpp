class Solution {
public:
    void printPat(int n) {

        for (int i = 1; i <= 2 * n - 1; i++) {

            int r;

            // Effective row
            if (i <= n)
                r = i;
            else
                r = 2 * n - i;

            // Leading spaces
            for (int j = 1; j <= 2 * (n - r) + 1; j++) {
                cout << " ";
            }

            // First star
            cout << "*";

            // If not first/last row
            if (r != 1) {

                // Spaces between stars
                for (int j = 1; j <= 4 * r - 5; j++) {
                    cout << " ";
                }

                // Second star
                cout << "*";
            }

            cout << endl;
        }
    }
};
