#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

ll dist_sq(ll x1, ll y1, ll x2, ll y2) {
    ll dx = x1 - x2;
    ll dy = y1 - y2;
    return dx * dx + dy * dy;
}

void solve() {
    int n;
    cin >> n;
    
    vector<pair<ll, ll>> centers(n);
    for (int i = 0; i < n; ++i) {
        cin >> centers[i].first >> centers[i].second;
    }
    
    ll xs, ys, xt, yt;
    cin >> xs >> ys >> xt >> yt;
    
    ll target_dist_sq = dist_sq(xs, ys, xt, yt);
    bool possible = true;
    
    for (int i = 0; i < n; ++i) {
        if (dist_sq(centers[i].first, centers[i].second, xt, yt) <= target_dist_sq) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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