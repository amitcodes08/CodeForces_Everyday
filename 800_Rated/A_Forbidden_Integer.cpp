#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "YES\n"
             << n << "\n";
        for (int i = 0; i < n; i++)
            cout << 1 << (i == n - 1 ? "" : " ");
        cout << "\n";
    }
    else
    {
        if (n == 1 || k == 1 || (k == 2 && n % 2 != 0))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            if (n % 2 == 0)
            {
                cout << n / 2 << "\n";
                for (int i = 0; i < n / 2; i++)
                    cout << 2 << (i == n / 2 - 1 ? "" : " ");
                cout << "\n";
            }
            else
            {
                cout << (n - 3) / 2 + 1 << "\n";
                for (int i = 0; i < (n - 3) / 2; i++)
                    cout << 2 << " ";
                cout << "3\n";
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}