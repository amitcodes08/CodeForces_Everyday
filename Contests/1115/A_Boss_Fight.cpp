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

        ll sum = 0;
        ll maxVal = -1;
        int maxFreq = 0;

        map<ll, int> mp;

        for(int i = 0; i < n; i++) {
            ll val;
            cin >> val;
            mp[val]++;
            sum = sum + val;

            if(mp[val] > maxFreq) {
                maxFreq = mp[val];
                maxVal = val;
            }
        }

        int otherCards = n - maxFreq;

        ll otherSum = sum - (ll)maxFreq * maxVal;

        int useCopies = min(maxFreq, otherCards + 2);

        ll ans = (ll)useCopies * maxVal + otherSum;
        cout << ans << "\n";
    }
    return 0;
}