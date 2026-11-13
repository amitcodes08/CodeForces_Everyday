#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int max_kept = 2; 
    int l = 0;

    for (int r = 2; r < n; ++r) {
        while (l + 1 < r && a[l] + a[l + 1] <= a[r]) {
            ++l;
        }
        max_kept = max(max_kept, r - l + 1);
    }

    cout << n - max_kept << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}