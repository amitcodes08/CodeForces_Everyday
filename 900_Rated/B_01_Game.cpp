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
        string s;
        cin >> s;

        int c0 = 0, c1 = 0;
        for(int i = 0; i <s.length(); i++) {
            if(s[i] == '0') {
                c0++;
            }
            else c1++;
        }

        int moves = min(c0, c1);

        if(moves % 2 == 1) {
            cout << "DA" << nl;
        }
        else {
            cout << "NET" << nl;
        }
    }
    return 0;
}