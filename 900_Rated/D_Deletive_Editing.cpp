#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    string s , t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    vector<int> freqOft(26, 0);

    for(int i = 0; i < m; i++) {
        freqOft[t[i]-'A']++;
    }

    for(int i = n - 1; i >= 0; i--) {
        if(freqOft[s[i] - 'A'] > 0) {
            freqOft[s[i] - 'A']--;
        }
        else {
            s[i] = '.';
        }
    }

    string final_string ="";
    for(int i = 0; i < n; i++) {
        if(s[i] != '.') {
            final_string += s[i];
        }
    }

    if(final_string == t) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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