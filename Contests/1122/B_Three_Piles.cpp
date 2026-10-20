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
        int a, b, c;
        cin >> a >> b >> c;

        ll take_none = abs(a - b);

        ll take_all = abs(a- b + c);

        cout << max(take_none, take_all) << nl;
    }
    return 0;
}