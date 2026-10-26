#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'

int main() {
    fastio;

    ll n, k;
    cin >> n >> k;

    ll oddCount = (n + 1) / 2;
    if (k <= oddCount) {
        cout << 2 * k - 1 << nl;
    } else {
        cout << 2 * (k - oddCount) << nl;
    }
    return 0;
}