#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

bool check(int k, const vector<int>& v, int n) {
    vector<int> bits(20, 0);
    for (int i = 0; i < k; ++i) {
        for (int b = 0; b < 20; ++b) {
            if ((v[i] >> b) & 1) {
                bits[b]++;
            }
        }
    }

    vector<int> freq = bits;
    for (int i = k; i < n; ++i) {
        for (int b = 0; b < 20; ++b) {
            if ((v[i] >> b) & 1) {
                freq[b]++;
            }
            if ((v[i - k] >> b) & 1) {
                freq[b]--;
            }
            if ((freq[b] > 0) != (bits[b] > 0)) {
                return false;
            }
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int low = 1;
    int high = n;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid, v, n)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << '\n';
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