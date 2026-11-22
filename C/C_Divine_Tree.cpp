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
        int n; ll m;
        cin >> n >> m;

        if(m < n || m > (ll)n * (n + 1) / 2) {
            cout << -1 << nl;
            continue;
        }

        vector<int> vals(n);
        for(int i = 0; i < n; i++) {
            vals[i] = i + 1;
        }

        ll rem = (ll)n * (n + 1) / 2 - m;
        for(int i = n - 1; i >= 0; i--) {
            if(rem <= vals[i] - 1) {
                vals[i] -= rem;
                rem = 0;
            }
            else {
                rem -= (vals[i] - 1);
                vals[i] = 1;
            }

            if(rem <= 0) break;
        }

        int root = *max_element(all(vals));
        cout << root << nl;
        for(int i = 0; i < n; i++) {
           if(vals[i] == i + 1){
            if(i+1 == root) continue;
            cout << i + 1 << " " << root << nl;
           }
           else {
            cout << i + 1 << " " << vals[i] << nl;
           }
        }

    }
    return 0;
}