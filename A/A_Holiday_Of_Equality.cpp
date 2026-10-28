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
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxEle = *max_element(all(a));

    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += (maxEle - a[i]);
    }
    cout << ans << nl;
    
    return 0;
}