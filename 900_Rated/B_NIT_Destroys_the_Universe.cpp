#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int noZeros = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 0) {
            noZeros++;
        }
    }

    if(noZeros == n) {
        cout << 0 << nl;
        return;
    }

    bool found_zero = false;
    int left = 0;
    int right = n - 1;

    while (a[left] == 0)
        left++;
    while (a[right] == 0)
        right--;

    for (int i = left; i <= right; i++)
    {
        if (a[i] == 0)
            found_zero = true;
    }
    if (found_zero == false)
        cout << 1 << endl;
    else 
        cout << 2 << endl;
        return;
}


int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}