#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
      int n;
      cin >> n;
      
      vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            a[i] = x - (i + 1);
        }

        sort(all(a));
        a.erase(unique(all(a)), a.end());

        int ans = 0;
        int len = 0;

        for(int i = 0; i < a.size(); i++) {
            if(i == 0 || a[i] == a[i-1]+1) {
                len++;
            } else {
                len = 1;
            }

            if(len > ans) {
                ans = len;
            }
        }

        cout << ans << nl;
    }
    return 0;
}