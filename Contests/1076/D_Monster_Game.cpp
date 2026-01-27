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

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<ll> prefix(n);
    prefix[0] = b[0];
    for (ll i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + b[i];
    }

    vector<ll> sorted_a = a;
    sort(all(sorted_a));

    ll ans = 0;

    set<ll> unique_strengths(all(sorted_a));

    for (ll x : unique_strengths)
    {
        ll cnt = n - (lower_bound(all(sorted_a), x) - sorted_a.begin());
        ll levels = 0;
        ll left = 0, right = n - 1, best = -1;
        while (left <= right)
        {
            ll mid = (left + right) / 2;
            if (prefix[mid] <= cnt)
            {
                best = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        if (best != -1)
        {
            levels = best + 1;
        }

        ans = max(ans, x * levels);
    }

    cout << ans << nl;
}

int main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}