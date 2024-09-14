#include <iostream>
#include <cstring>
using namespace std;

const int MAX_DIGITS = 1103;

int main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        int n; // Set n to the length of the input string
        char digits[MAX_DIGITS];
        cin >> n >> digits;


        int num[10] = {0};  // Array to count occurrences of each digit

        for (int i = 0; i < n; ++i) {
            num[digits[i] - '0']++;
        }

        bool a = false, s = false, d = false, f = false;

        if (num[1] > 0 || num[4] > 0 || num[7] > 0 || num[0] > 0) {
            a = true;
        }
        if (num[1] > 0 || num[2] > 0 || num[3] > 0) {
            s = true;
        }
        if (num[3] > 0 || num[6] > 0 || num[9] > 0 || num[0] > 0) {
            d = true;
        }
        if (num[7] > 0 || num[0] > 0 || num[9] > 0) {
            f = true;
        }

        // Output result based on flags
        if (a && s && d && f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}