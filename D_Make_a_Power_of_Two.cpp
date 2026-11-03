#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    string s;
    cin >> s;
    
    int ans = s.length() + 1;
    
    for (int i = 0; i < 60; ++i) {
        string p = to_string(1ULL << i);
        
        int matched = 0;
        for (char c : s) {
            if (matched < p.length() && c == p[matched]) {
                matched++;
            }
        }
        
        int ops = (s.length() - matched) + (p.length() - matched);
        ans = min(ans, ops);
    }
    
    cout << ans << "\n";
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