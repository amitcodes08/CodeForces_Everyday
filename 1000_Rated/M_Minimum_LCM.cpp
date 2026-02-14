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
        ll n;
        cin >> n;

        ll ans_a = 1;
        ll ans_b = n - 1;

        for (ll fac = 2; fac * fac <= n; fac++)
        {
            if (n % fac == 0)
            {
                ans_a = n / fac;
                ans_b = n - ans_a;
                break;
            }
        }

        cout << ans_a << " " << ans_b << nl;
    }
    return 0;
}