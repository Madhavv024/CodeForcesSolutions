#include <iostream>
#include <string>
#include <vector>

using namespace std;

int calculate_typing_time(const string &s) {
    if (s.empty()) return 0;
    
    int time = 2; 
    for (size_t i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            time += 1;
        } else {
            time += 2;
        }
    }
    return time;
}

void solve() {
    string s;
    cin >> s;

    // Frequency array for 26 lowercase Latin letters
    int freq[26] = {0};

    // Count frequency of each character
    for (char c : s) {
        freq[c - 'a']++;
    }

    // Variable to keep track of the maximum typing time
    int max_time = 0;
    string best_password = s;

    // Try inserting each character from 'a' to 'z' at each possible position
    for (size_t i = 0; i <= s.size(); ++i) {
        for (char c = 'a'; c <= 'z'; ++c) {
            // Insert character c at position i
            string new_s = s.substr(0, i) + c + s.substr(i);
            int new_time = calculate_typing_time(new_s);
            if (new_time > max_time) {
                max_time = new_time;
                best_password = new_s;
            }
        }
    }

    cout << best_password << "\n";
}



int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    
    while (t--) {
        solve();
    }
    
    return 0;
}
