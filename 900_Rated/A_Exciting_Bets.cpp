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
        ll a, b;
        cin >> a >> b;

        if(b > a) {
            swap(a, b);
        }
        if(a == b) {
            cout << 0 << " " << 0 << nl;
        }
        else {
            ll diff = a - b;

            ll moves = min(b % diff, diff - b%diff);

            cout << diff << " " << moves << nl;
        }        

    }
    return 0;
}