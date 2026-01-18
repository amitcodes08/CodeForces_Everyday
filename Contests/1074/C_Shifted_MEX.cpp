#include<bits/stdc++.h>
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
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        int ans = 1;
        int c = 1;

        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] == a[i - 1] + 1)
            {
                c++;
                ans = max(ans, c);
            }
            else
            {
                c = 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}