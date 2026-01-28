#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    ll a, b, n;
    cin >> a >> b >> n;

    vector<ll> v(n);
    
    for(ll i = 0; i < n; i++) {
       cin >> v[i];
    }

    ll ans = b;
    for(ll i = 0; i < n; i++) {
        ans += min(v[i], a-1);
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