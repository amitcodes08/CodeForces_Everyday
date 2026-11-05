#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

struct DSU {
    vector<int> parent;
    vector<int> sz;
    vector<bool> fixed;

    DSU(int n) {
        parent.resize(n + 1);
        sz.assign(n + 1, 1);
        fixed.assign(n + 1, false);
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
        }
    }

    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }

    void unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            if (sz[root_i] < sz[root_j])
                swap(root_i, root_j);
            parent[root_j] = root_i;
            sz[root_i] += sz[root_j];
            fixed[root_i] = fixed[root_i] || fixed[root_j];
        }
    }
};

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n), d(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> d[i];

    DSU dsu(n);

    for (int i = 0; i < n; i++) {
        if (d[i] != 0) {
            dsu.fixed[a[i]] = true;
        }
    }

    for (int i = 0; i < n; i++) {
        dsu.unite(a[i], b[i]);
    }

    long long ans = 1;

    for (int i = 1; i <= n; i++) {
        if (dsu.find(i) == i) {
            if (dsu.sz[i] > 1 && !dsu.fixed[i]) {
                ans = (ans * 2) % MOD;
            }
        }
    }

    cout << ans << "\n";
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