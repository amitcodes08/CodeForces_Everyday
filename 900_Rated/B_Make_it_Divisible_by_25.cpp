#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

int solve(string possible, string n) {
    int op = 0;
    int ind = possible.size() - 1;

    for(int i = n.size() - 1; i >= 0; i--) {
        if(n[i] == possible[ind]) {
            ind--;
            if(ind < 0) {
                break;
            }
        }
        else
            op++;
    }

    if(ind >= 0) {
        op = INT_MAX;
    }

    return op;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;

        int ans = INT_MAX;

        vector<string> possibleValues = {"00", "25", "50", "75"};
        for(auto& possible : possibleValues) {
            ans = min(ans, solve(possible, n));
        }

        cout << ans << nl;
    }
    return 0;
}