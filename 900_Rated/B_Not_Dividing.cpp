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

    vector<ll> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            a[i]++;
        }
    }

    for(int i = 0; i < n - 1; i++) {
        if(a[i+1] % a[i] == 0) {
            a[i+1]++;
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