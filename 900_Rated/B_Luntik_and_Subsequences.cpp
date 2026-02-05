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

        vector<ll> a(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        int countOnes = 0;
        int countZeros = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] == 0) {
                countZeros++;
            }
            else if(a[i] == 1) {
                countOnes++;
            }
        }

        long long ans = pow(2, countZeros) * countOnes;

        cout << ans << nl;
        
    }
    return 0;
}