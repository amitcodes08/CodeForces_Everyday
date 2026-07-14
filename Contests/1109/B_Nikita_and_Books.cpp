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
        int n; cin >> n;
        ll currSum = 0;
        bool possible = true;

        for (int i = 1; i <= n; ++i)
        {
            ll a;
            cin >> a;

            currSum += a;

            ll requiredSum = 1LL * i * (i + 1) / 2;

            if (currSum < requiredSum)
            {
                possible = false;
            }
        }

        if (possible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}