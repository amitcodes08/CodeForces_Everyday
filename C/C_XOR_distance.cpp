#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, r;
    cin >> a >> b >> r;

    if (a < b) {
        swap(a, b);
    }

    bool first_diff = true;
    long long x = 0;

    for (int i = 61; i >= 0; --i) {
        bool bit_a = (a >> i) & 1;
        bool bit_b = (b >> i) & 1;

        if (bit_a != bit_b) {
            if (first_diff) {
                first_diff = false;
            } else {
                if (bit_a == 1 && (x + (1LL << i)) <= r) {
                    x += (1LL << i);
                }
            }
        }
    }

    long long ans = (a ^ x) - (b ^ x);
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}