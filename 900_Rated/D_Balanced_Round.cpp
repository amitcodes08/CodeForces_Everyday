#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    int n, k; cin >> n >> k;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a));

    int c = 1;
    int ans = 1;

    for(int i = 1; i < n; i++){
        if(a[i] - a[i-1] <= k) {
            c++;
        }
        else 
            c = 1;

        ans = max(ans, c);
    }

    cout << n - ans << nl;
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