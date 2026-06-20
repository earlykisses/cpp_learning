#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> marks;

    // Insert
    marks["Piyush"] = 95;
    marks["Rahul"] = 88;
    marks["Aman"] = 92;

    // Access
    cout << "Piyush: " << marks["Piyush"] << endl;

    // Update
    marks["Rahul"] = 90;

    // Check if key exists
    if (marks.find("Aman") != marks.end()) {
        cout << "Aman found" << endl;
    }

    // Traverse
    for (auto pair : marks) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Delete
    marks.erase("Rahul");

    return 0;
}
