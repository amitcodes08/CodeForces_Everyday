#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define nl '\n'

void solve()
{
    int n, q;
    if (!(cin >> n >> q))
        return;

    vector<ll> a(n);
    vector<ll> prefixSum(n + 1, 0);

    ll oldSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        oldSum += a[i];
        prefixSum[i + 1] = prefixSum[i] + a[i];
    }

    while (q--)
    {
        int l, r;
        ll k;
        cin >> l >> r >> k;

        ll sumRemove = prefixSum[r] - prefixSum[l - 1];
        ll sumAdd = (ll)(r - l + 1) * k;

        ll totalSum = oldSum - sumRemove + sumAdd;

        if (totalSum % 2 != 0)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}

int main()
{
    fastio;
    int t;
    if (!(cin >> t))
        t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}