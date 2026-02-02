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

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ops = 0;

    for(int i = n - 2; i >= 0; i--) {
        while(a[i] >= a[i+1]) {
            a[i] = a[i] / 2;
            ops++;
            if(a[i] == 0) {
                break;
            }
        }

        if(a[i] == 0 && a[i+1] == 0) {
            ops = -1;
            break;
        }

    }

    cout << ops << nl;
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