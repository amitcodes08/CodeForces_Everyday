#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n);

    for(int i = 0 ; i < n; i++) {
        cin >> a[i];
    }

    ll ans = a[n-1] - a[0];

    for(int i = 1; i < n; i++) {
        ans = max(ans, a[i] - a[0]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, a[n-1] - a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, a[i] - a[i+1]);
    }

    cout << ans << nl;
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