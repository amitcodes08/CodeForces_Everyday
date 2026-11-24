#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void apply_op(string& a, int len) {
    for (int i = 0; i < len; ++i) {
        a[i] = (a[i] == '0' ? '1' : '0');
    }
    reverse(a.begin(), a.begin() + len);
}

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    vector<int> ops;

    for (int i = n - 1; i >= 0; --i) {
        if (a[i] == b[i]) {
            continue;
        }
        if (a[0] == b[i]) {
            ops.push_back(1);
            apply_op(a, 1);
        }
        ops.push_back(i + 1);
        apply_op(a, i + 1);
    }

    cout << ops.size();
    for (int p : ops) {
        cout << " " << p;
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