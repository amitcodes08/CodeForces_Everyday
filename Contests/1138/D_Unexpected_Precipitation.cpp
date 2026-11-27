#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> x(n), y(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }

        for(int i = 0; i < n; ++i) {
            cin >> y[i];
        }

        ll ans = 0;
        for(int i = n - 1; i >= 0; i--) {
            ll d = x[i] - y[i];
            ans = max(ans + d, -ans);
        }

        if(ans > 0) {
            cout << "Sunny" << nl;
        } else if(ans < 0) {
            cout << "Aubrey" << nl;
        }
        else {
            cout << "Draw" << nl;
        }
    }
    return 0;
}