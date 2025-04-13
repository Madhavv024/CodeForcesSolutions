#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to get the mapped value of a character
int mappedValue(char c) {
    if (c >= 'a' && c <= 'b') return 1;  // 'a' -> 1, 'b' -> 1
    if (c >= 'c' && c <= 'e') return 2;  // 'c' -> 2, 'd' -> 2, 'e' -> 2
    if (c >= 'f' && c <= 'h') return 3;  // 'f' -> 3, 'g' -> 3, 'h' -> 3
    if (c >= 'i' && c <= 'k') return 4;  // 'i' -> 4, 'j' -> 4, 'k' -> 4
    if (c >= 'l' && c <= 'n') return 5;  // 'l' -> 5, 'm' -> 5, 'n' -> 5
    if (c >= 'o' && c <= 'q') return 6;  // 'o' -> 6, 'p' -> 6, 'q' -> 6
    if (c >= 'r' && c <= 't') return 7;  // 'r' -> 7, 's' -> 7, 't' -> 7
    if (c >= 'u' && c <= 'w') return 8;  // 'u' -> 8, 'v' -> 8, 'w' -> 8
    if (c >= 'x' && c <= 'z') return 9;  // 'x' -> 9, 'y' -> 9, 'z' -> 9
    return 0;  // In case of invalid character (shouldn't happen with valid input)
}

int countExtraordinarySubstrings(const string& s) {
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += mappedValue(s[j]);
            int length = j - i + 1;
            if (sum % length == 0) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    string s;
    cin >> s;  // Read the input string
    
    cout << countExtraordinarySubstrings(s) << endl;  // Output the result
    
    return 0;
}
