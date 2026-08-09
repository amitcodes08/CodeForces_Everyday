#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int M = 998244353;

void solve() {
    vector<ll> a(3);
    cin >> a[0] >> a[1] >> a[2];

    sort(a.begin(), a.end());

    ll ans = min(a[2] - a[0], a[1]);
    cout << ans << endl;

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