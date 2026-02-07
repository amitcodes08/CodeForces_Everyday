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
        cin >> n;

        while(n% 2 == 0) {
            n /= 2;
        }

        if(n > 1) {
            cout << "YES" << nl;
        }
        else {
            cout << "NO" << nl;
        }
    }
    return 0;
}