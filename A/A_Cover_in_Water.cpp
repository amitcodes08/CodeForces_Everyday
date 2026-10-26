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
        cin >> n;

        string s;
        cin >> s;

        bool continuousThreeEmptyCells = false;
        int totalEmptyCells = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                totalEmptyCells++;
                if (i >= 2 && s[i - 1] == '.' && s[i - 2] == '.') {
                    continuousThreeEmptyCells = true;
                    break;
                }
            }
        }

        if (continuousThreeEmptyCells) {
            cout << 2 << nl;
        } else {
            cout << totalEmptyCells << nl;
        }
    }
    return 0;
}