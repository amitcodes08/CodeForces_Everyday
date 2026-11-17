#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int steps(int x) {
    int cnt = 0;
    while (x > 1) {
        x = (x + 1) / 2;
        cnt++;
    }
    return cnt;
}

void solve() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int rem_n = min(a, n - a + 1);
    int ans1 = 1 + steps(rem_n) + steps(m);

    int rem_m = min(b, m - b + 1);
    int ans2 = 1 + steps(n) + steps(rem_m);

    cout << min(ans1, ans2) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}