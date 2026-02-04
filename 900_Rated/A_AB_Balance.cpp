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

    int n = s.size();

    if(s[0] != s[n-1]) {
        if(s[0] = 'a') {
            s[0] = 'b';
        }
        else {
            s[0] = 'a';
        }
    }

    cout << s << nl;

    
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