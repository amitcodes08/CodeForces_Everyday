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
        int n, m;
        cin >> n >> m;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<int> b(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
        }


        sort(b.begin(), b.end());

        ll totalMax = 0;
        int prevIdx = 0;

        for (int limit : b)
        {
            ll sum = 0;
            for (int j = prevIdx; j < limit; ++j)
            {
                sum += a[j];
            }

            totalMax += abs(sum);
            prevIdx = limit;
        }

        for (int j = prevIdx; j < n; ++j)
        {
            totalMax += a[j];
        }

        cout << totalMax << "\n";
    }
    return 0;
}