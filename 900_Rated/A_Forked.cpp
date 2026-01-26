#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;
int dx[4] = {1, -1, -1, 1};
int dy[4] = {1, 1, -1, -1};

void solve() {
    ll a, b;
    cin >> a >> b;

    ll xk, yk;
    cin >> xk >> yk;

    ll xq, yq;
    cin >> xq >> yq;

    set<pair<ll, ll>> posKing, posQueen;

    for(int j = 0; j < 4; j++) {
        posKing.insert({xk+dx[j]*a, yk+dy[j]*b});
        posKing.insert({xk+dx[j]*b, yk+dy[j]*a});

        posQueen.insert({xq+dx[j]*a, yq+dy[j]*b});
        posQueen.insert({xq+dx[j]*b, yq+dy[j]*a});
    }
    int ans = 0;
    for(auto& p : posKing) {
        if(posQueen.find(p) != posQueen.end()) {
            ans++;
        }

    }

    cout << ans << nl;


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