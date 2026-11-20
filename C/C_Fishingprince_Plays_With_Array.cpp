#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

vector<pair<ll, ll>> get_canonical(int len, ll m) {
    vector<pair<ll, ll>> res;
    for (int i = 0; i < len; ++i) {
        ll x;
        cin >> x;
        ll cnt = 1;
        while (x % m == 0) {
            x /= m;
            cnt *= m;
        }
        if (!res.empty() && res.back().first == x) {
            res.back().second += cnt;
        } else {
            res.push_back({x, cnt});
        }
    }
    return res;
}

void solve() {
    int n;
    ll m;
    cin >> n >> m;
    auto canonical_a = get_canonical(n, m);

    int k;
    cin >> k;
    auto canonical_b = get_canonical(k, m);

    if (canonical_a == canonical_b) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
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