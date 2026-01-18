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
        
        int maxi = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            maxi = max(maxi, a[i]);
        }

        cout << maxi * n << endl;
    }
    return 0;
}