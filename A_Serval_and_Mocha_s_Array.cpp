#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool flag = false;

        for (int i = 0; i < n && !flag; i++)
        {
            for (int j = i + 1; j < n && !flag; j++)
            {
                if (gcd(a[i], a[j]) <= 2)
                {
                    flag = true;
                }
            }
        }

        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}