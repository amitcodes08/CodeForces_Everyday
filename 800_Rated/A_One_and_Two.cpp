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
        {
            cin >> a[i];
        }

        long long total2s = 0;


        for (int i = 0; i < n; i++)
        {
            if(a[i] == 2){
                total2s++;
            }
        }

        int ans = -1;
        long long curr2s = 0;
        for (int k = 0; k < n - 1; k++)
        {
            if(a[k] == 2){
                curr2s++;
            }

            if (curr2s == (total2s - curr2s)) {
                ans = k+1;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}