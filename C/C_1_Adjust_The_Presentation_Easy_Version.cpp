#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    vector<int> first_appearances;
    set<int> seen;
    for (int x : b) {
        if (seen.find(x) == seen.end()) {
            seen.insert(x);
            first_appearances.push_back(x);
        }
    }

    bool possible = true;
    for (size_t i = 0; i < first_appearances.size(); ++i) {
        if (first_appearances[i] != a[i]) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YA\n";
    } else {
        cout << "TIDAK\n";
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