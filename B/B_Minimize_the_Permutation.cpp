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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<bool> used(n + 1, false);

        for(int i = 1; i <= n; i++) {
            int p = find(a.begin(), a.end(), i) - a.begin();

            while(p > 0 && !used[p-1] && a[p-1] > a[p]) {
                swap(a[p], a[p-1]);
                used[p-1] = true;
                p--;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << nl;
    }
    return 0;
}