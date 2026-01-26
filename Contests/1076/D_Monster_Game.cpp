#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> b(n);
    for(ll i = 0; i < n; i++) {
        cin >> b[i];
    }

    for(ll i = 1; i < n; i++) {
        b[i] += b[i-1];
    }

    ll j = -1;
    ll ans = 0;

    for(ll i = 0; i < n; i++) {
        ll cnt = n - i;
        while(j < n - 1 && b[j + 1] <= cnt) {
            j++;
        }

        while(j >= 0 && b[j] > cnt) {
            j--;
        }

        ans = max(ans, a[i]* (j + 1));
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