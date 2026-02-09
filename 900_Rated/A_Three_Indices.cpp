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
        bool found = false;
        for(int i = 0; i < n - 1; i++) {
            if(a[i] > a[i - 1] && a[i] > a[i+1]) {
                cout << "YES" << nl;
                cout << i << " " << i+1 << " " << i+2 << nl;
                found = true;
                break;
            }
        }

        if(!found) {
            cout << "NO" << nl;
        }

    }
    return 0;
}