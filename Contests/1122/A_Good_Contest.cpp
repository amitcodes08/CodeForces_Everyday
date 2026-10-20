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

        vector<int> a(3);
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }

        int ans = n - *min_element(all(a));
        cout << ans << nl;
    }
    return 0;
}