#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

int main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        ll p;
        cin >> n >> k >> p;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(all(a));

        vector<ll> pre(n+1, 0);
        for (int i = 0; i < n; ++i)
        {
            pre[i + 1] = pre[i] + a[i];

        }

        ll ans = 0;
        int i = 0;

        while(i + k <= n)
        {
            ll sum = pre[i + k] - pre[i];
            if (sum < p)
            {
                ans += p;
                i += k;
            }
            else {
                break;
            }
            
        }

        ans += pre[n] - pre[i];
        cout << ans << nl;
    }
    return 0;
}