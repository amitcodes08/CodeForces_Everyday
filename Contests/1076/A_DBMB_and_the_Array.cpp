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
    int n, s, x;
    cin >> n >> s >> x;

    vector<int> a(n);
    ll currSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        currSum += a[i];
    }

    ll rem = s - currSum;

    if (rem < 0)
    {
        cout << "NO" << nl;
    }
    else if (rem == 0)
    {
        cout << "YES" << nl;
    }
    else if (rem % x == 0)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
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