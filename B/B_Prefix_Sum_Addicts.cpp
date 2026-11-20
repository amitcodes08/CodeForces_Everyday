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
        ll n, k;
        cin >> n >> k;
        vector<ll> s(k);
        for (int i = 0; i < k; ++i) {
            cin >> s[i];
        }

        if(k == 1) {
            cout << "Yes\n";
        }
        else {
            vector<ll> v(n);
            ll j = n - 1;
            for (int i = k - 1; i >= 1; --i) {
                v[j] = s[i] - s[i - 1];
                j--;
            }

            while (j >= 0) {
                v[j] = v[j + 1];
                s[0] -= v[j];
                j--;
            }

            v[0] += s[0];
            if(is_sorted(all(v))) {
                cout << "Yes\n";
            }
            else {
                cout << "No\n";
            }
        }

    }
    return 0;
}