#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;

        vector<long long> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> lastOp(n, 0);
        vector<long long> a(n, 0);
        int lReset = 0;

        for (int time = 1; time <= m; time++)
        {
            int ind;
            long long val;
            cin >> ind >> val;
            ind--;

            if (lastOp[ind] < lReset)
            {
                a[ind] = 0;
                lastOp[ind] = lReset;
            }

            if (b[ind] + a[ind] + val > h)
            {
                lReset = time;
                continue;
            }

            a[ind] += val;
            lastOp[ind] = time;
        }

        for (int i = 0; i < n; i++)
        {
            if (lastOp[i] < lReset)
            {
                a[i] = 0;
            }
            cout << b[i] + a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}