#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

int solve_tree(int l, int r, vector<int>& p) {
    if (r - l == 1) {
        return 0;
    }
    int mid = l + (r - l) / 2;
    int ops = solve_tree(l, mid, p) + solve_tree(mid, r, p);
    if (p[l] > p[mid]) {
        ops++;
        for (int i = 0; i < mid - l; ++i) {
            swap(p[l + i], p[mid + i]);
        }
    }
    return ops;
}

void solve() {
    int m;
    cin >> m;
    vector<int> p(m);
    for (int i = 0; i < m; ++i) {
        cin >> p[i];
    }
    int ans = solve_tree(0, m, p);
    if (is_sorted(p.begin(), p.end())) {
        cout << ans << "\n";
    } else {
        cout << -1 << "\n";
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