#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 4, 6, 8, 10};
    int target = 10;

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "Found: "
                 << arr[left] << " and "
                 << arr[right] << endl;
            break;
        }
        else if (sum < target) {
            left++;      // Need larger sum
        }
        else {
            right--;     // Need smaller sum
        }
    }

    return 0;
}
