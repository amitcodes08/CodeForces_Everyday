#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n), ans(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (n == 1) {
            cout << v[0] << nl;
            continue;
        }

        ll total_sum = (v[0] + v[n - 1]) / (n - 1);

        for (int i = 1; i < n - 1; i++) {
            ans[i] = (v[i - 1] - 2 * v[i] + v[i + 1]) / 2;
        }

        ans[0] = (v[1] - v[0] + total_sum) / 2;
        ans[n - 1] = (v[n - 2] - v[n - 1] + total_sum) / 2;

        for (int i = 0; i < n; i++) {
            cout << ans[i] << (i + 1 == n ? "" : " ");
        }
        cout << nl;
    }
    return 0;
}