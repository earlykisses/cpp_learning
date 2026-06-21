#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> marks;

    // Insert data
    marks["Piyush"] = 95;
    marks["Rahul"] = 88;
    marks["Aman"] = 92;

    // Access data
    cout << "Piyush Marks: " << marks["Piyush"] << endl;

    // Check if key exists
    if (marks.find("Rahul") != marks.end()) {
        cout << "Rahul exists in map" << endl;
    }

    // Traverse map
    for (auto pair : marks) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
