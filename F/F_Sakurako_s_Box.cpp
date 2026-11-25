#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

long long power(long long base, long long exp) {
    long long res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

void solve() {
    long long n;
    cin >> n;

    long long P = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        P = (P + x * sum) % MOD; 
        sum = (sum + x) % MOD;
    }

    long long Q = (n * (n - 1) / 2) % MOD;

    long long ans = (P * power(Q, MOD - 2)) % MOD;
    cout << ans << "\n";
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