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
        ll n;
        cin >> n;

        string s;
        cin >> s;

        unordered_set<char> st;
        vector<ll> prefix(n+1, 0);
        vector<ll> suffix(n+1, 0);

        for(ll i = 1; i <= n; i++) {
            st.insert(s[i-1]);
            prefix[i] = st.size();
        }

        st.clear();

        for(ll i = n; i >= 1; i--) {
            st.insert(s[i-1]);
            suffix[i] = st.size();
        }

        ll ans = 0;
        for(ll i = 0; i < n; i++) {
            ans = max(ans, prefix[i] + suffix[i+1]);
        }

        cout << ans << nl;
    }
    return 0;
}