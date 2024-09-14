#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(k);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < k; ++i) {
        cin >> b[i];
    }

    sort(b.rbegin(), b.rend()); //sorting in decreasing order
    int b_index = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            a[i] = b[b_index++];
        }
    }

    bool not_increasing = false;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] >= a[i+1]) {
            not_increasing = true;
            break;
        }
    }

    if (not_increasing) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
