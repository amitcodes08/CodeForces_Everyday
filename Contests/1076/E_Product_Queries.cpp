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

vector<int> factors(int n)
{
    vector<int> res;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res.push_back(i);
            if (i != n / i)
            {
                res.push_back(n / i);
            }
        }
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, INT_MAX / 10);
    vector<int> exist(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        exist[x] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (exist[i])
        {
            dp[i] = 1;
            continue;
        }

        auto fact = factors(i);
        for (auto &f : fact)
        {
            if (exist[f])
            {
                dp[i] = min(dp[i], 1 + dp[i / f]);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << (dp[i] >= INT_MAX / 10 ? -1 : dp[i]) << " ";
    }
    cout << nl;
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