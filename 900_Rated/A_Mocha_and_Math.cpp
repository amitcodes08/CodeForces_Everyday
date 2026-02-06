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

        vector<int> a(n);

        for(int i = 0; i < n; i++) 
            cin >> a[i];

        int totalAnd = a[0];

        for(int i = 1; i < n; i++) {
            totalAnd &= a[i];
        }

        cout << totalAnd << nl;
    }
    return 0;
}