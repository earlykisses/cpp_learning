#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    if (n < 0)
        return false;

    int original = n;
    int reverse = 0;

    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return original == reverse;
}

int main() {
    int n = 121;

    cout << (isPalindrome(n) ? "Palindrome" : "Not Palindrome");
}
