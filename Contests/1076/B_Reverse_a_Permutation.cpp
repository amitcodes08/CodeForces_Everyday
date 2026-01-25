#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> mp(n+1);

    for(int i = 0 ; i < n; i++) {
        cin >> a[i];
        mp[a[i]] = i;
    }

    for(int i = 0; i < n; i++) {
        int value = n - i;

        if(a[i] != value) {
            int l = i;
            int r = mp[value];

            reverse(a.begin() + l, a.begin() + r + 1);

            break;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << nl;

}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}