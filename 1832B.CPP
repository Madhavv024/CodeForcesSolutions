/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include <vector>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int insertions = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            ++insertions;
        }
    }

    vector<int> result(n + insertions);
    int j = 0;
    for (int i = 0; i < n - 1; ++i) {
        result[j++] = arr[i];
        if (arr[i] > arr[i + 1]) {
            result[j++] = 1;
        }
    }
    result[j++] = arr[n - 1]; 

    cout << result.size() << "\n";
    for (const int &num : result) {
        cout << num << " ";
    }
    cout << "\n";
}

int32_t main() {
    FAST_IO;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
