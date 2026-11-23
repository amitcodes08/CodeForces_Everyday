#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    if (abs(a - b) > 1 || a + b > n - 2) {
        cout << -1 << "\n";
        return;
    }

    vector<int> p(n);
    iota(p.begin(), p.end(), 1);

    if (a > b) {
        int idx = n - 2;
        for (int i = 0; i < a; ++i) {
            swap(p[idx], p[idx + 1]);
            idx -= 2;
        }
    } else if (b > a) {
        int idx = 0;
        for (int i = 0; i < b; ++i) {
            swap(p[idx], p[idx + 1]);
            idx += 2;
        }
    } else {
        int idx = 1;
        for (int i = 0; i < a; ++i) {
            swap(p[idx], p[idx + 1]);
            idx += 2;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << p[i] << (i + 1 == n ? "" : " ");
    }
    cout << "\n";
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