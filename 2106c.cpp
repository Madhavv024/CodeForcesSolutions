#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
        
        long long known_x = -1;
        bool conflict = false;
        
        // Step 1: Find known x from positions where b[i] != -1
        for (int i = 0; i < n; ++i) {
            if (b[i] != -1) {
                long long x_candidate = a[i] + b[i];
                if (known_x == -1) {
                    known_x = x_candidate;
                } else if (known_x != x_candidate) {
                    conflict = true;
                    break;
                }
            }
        }

        if (conflict) {
            cout << 0 << "\n";
            continue;
        }

        // Step 2: Find intersection of valid x-ranges from unknown b[i]
        long long min_x = 0;
        long long max_x = 1e18; // large enough
        
        for (int i = 0; i < n; ++i) {
            if (b[i] == -1) {
                min_x = max(min_x, a[i]);
                max_x = min(max_x, a[i] + k);
            }
        }

        if (known_x != -1) {
            // Known x must lie within [min_x, max_x]
            if (known_x >= min_x && known_x <= max_x) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else {
            // No known x: number of valid values in [min_x, max_x]
            long long count = max(0LL, max_x - min_x + 1);
            cout << count << "\n";
        }
    }
    
    return 0;
}
