#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    ll x, y;
    cin >> x >> y;
    ll s = x + y;
    ll best_x = 0;
    
    for (int i = 30; i >= 0; --i) {
        ll bit = 1LL << i;
        if ((x & bit) && (s & bit)) {
            best_x |= bit;
        } else if ((x & bit) && !(s & bit)) {
            for (int j = i - 1; j >= 0; --j) {
                if (s & (1LL << j)) {
                    best_x |= (1LL << j);
                }
            }
            break;
        }
    }
    
    cout << s << " " << (x - best_x) << nl;
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