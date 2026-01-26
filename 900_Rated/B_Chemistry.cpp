#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++) {
        mp[s[i] - 'a']++;
    }

    int oddFreq = 0;
    for(auto& it : mp) {
        if(it.second % 2 == 1) {
            oddFreq++;
        }
    }

    if(oddFreq > k+1) {
        cout << "NO" << nl;
    }
    else {
        cout << "YES" << nl;
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