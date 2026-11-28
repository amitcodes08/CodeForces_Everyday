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
    vector<string> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    for (int j = 0; j < n; ++j) {
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            if (i == j || b[i][j] == '1') {
                a.push_back(i + 1);
            }
        }
        
        cout << a.size();
        for (int x : a) {
            cout << " " << x;
        }
        cout << "\n";
    }
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