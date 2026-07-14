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
        int n, x, y;
        cin >> n >> x >> y;

        int gc = __gcd(x, y);

        bool possible = true;

        for(int i = 1; i <= n; i++) {
            int ithP;
            cin >> ithP;

            if(ithP % gc != i % gc) {
                possible = false;
            }
        }

        if (possible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}