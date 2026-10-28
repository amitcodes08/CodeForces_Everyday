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
    ll k;
    cin >> n >> k;

    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> b(n);
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<ll> prefix(n);
    prefix[0] = a[0];
    for(int i = 1; i < n; i++) {
        prefix[i] = max(a[i], prefix[i-1] + a[i]);
    }

    vector<ll> suffix(n);
    suffix[n-1] = a[n-1];

    for(int i = n-2; i >= 0; i--) {
        suffix[i] = max(a[i], suffix[i+1] + a[i]);
    }

    ll ans = prefix[0];
    for(int i = 0; i < n; i++) {
        ans = max(ans, prefix[i]);
    }

    if(k%2 == 1) {
        for(int i = 0; i < n; i++) {
            ans = max(ans, prefix[i] + suffix[i] - a[i] + b[i]);
        }
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