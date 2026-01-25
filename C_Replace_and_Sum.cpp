#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0 ; i < n; i++) cin >> a[i];
    for(int i = 0 ; i < n; i++) cin >> b[i];

    vector<int> maxValatPos(n);

    for(int i = 0 ; i < n; i++) {
        maxValatPos[i] = max(a[i], b[i]);
    }

    vector<int> maxAvail(n);

    maxAvail[n-1] = maxValatPos[n-1];
    for(int i = n - 2; i >= 0; i--) {
        maxAvail[i] = max(maxValatPos[i], maxAvail[i+1]);
    }

    vector<int> prefixSum(n+1, 0);

    for(int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + maxAvail[i];
    }

    while(q--) {
        int l, r;
        cin >> l >> r;

        cout << prefixSum[r] - prefixSum[l-1] << " ";
    }

    cout << nl;

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