#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum_odd = 0, sum_even = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i % 2 == 0) {
            sum_odd += a[i];
        } else {
            sum_even += a[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        if (sum_odd <= sum_even) {
            cout << (i % 2 == 0 ? 1 : a[i]) << (i == n - 1 ? "" : " ");
        } else {
            cout << (i % 2 != 0 ? 1 : a[i]) << (i == n - 1 ? "" : " ");
        }
    }
    cout << "\n";
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}