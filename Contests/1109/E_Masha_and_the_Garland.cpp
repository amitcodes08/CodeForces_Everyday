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
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        vector<int> prefix(n + 1, 0);

        for (int i = 2; i <= n; ++i)
        {
            prefix[i] = prefix[i - 1] + (s[i - 2] == s[i - 1] ? 1 : 0);
        }

        for (int i = 0; i < q; ++i)
        {
            int l, r, k;
            cin >> l >> r >> k;

            int err = prefix[r] - prefix[l];

            int reqOp = (err + 1) / 2;

            if (reqOp <= k)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}