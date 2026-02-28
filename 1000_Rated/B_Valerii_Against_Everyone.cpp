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
        vector<ll> b(n);

        bool isDistinct = true;
        set<ll> distinctElements;
        for(int i = 0; i < n; i++) {
            cin >> b[i];
            if(distinctElements.count(b[i])) {
                isDistinct = false;
            }
            distinctElements.insert(b[i]);
        }

        if(isDistinct) {
            cout << "NO" << nl;
        } else {
            cout << "YES" << nl;
        }
    }
    return 0;
}