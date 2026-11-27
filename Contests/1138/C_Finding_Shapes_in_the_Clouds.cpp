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
        string s;
        cin >> n >> s;

        if(n % 2 == 1) {
            cout << "NO" << nl;
            continue;
        }

        bool adjFound = false;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                adjFound = true;
                break;
            }
        }
        if (adjFound) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }
    return 0;
}