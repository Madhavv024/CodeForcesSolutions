#include <iostream>
using namespace std;

void solve() {
    int a, b;
	cin >> a >> b;

	if (a == 0) {
		cout << 1<<"\n";
		return;
	}

	if (b == 0) {
		cout << a + 1<<"\n";
		return;
	}

	cout << (b * 2) + a + 1<<"\n";
}

int main() {
    int tc = 1;
    cin >> tc;  // Uncomment if there are multiple test cases
    while (tc--) {
        solve();
    }
    return 0;
}
