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
        ll n;
        ll x;

        cin >> n >> x;

        vector<ll> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        ll min = 0, max = 0;
        for(int i = 0 ; i < n; i++) {
            max += ceil(a[i] * 1.0 / x);
            min += a[i];
        }

        min = ceil(min * 1.0 / x);

        cout << min << " " << max << nl;


    }
    return 0;
}