#include <iostream>
#include <vector>

using namespace std;

const int MAXA = 1000000;
vector<bool> is_prime(MAXA + 1, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAXA; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAXA; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void solve() {
    int n, e;
    cin >> n >> e;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long total_pairs = 0;

    for (int r = 0; r < e; r++) {
        vector<int> sub;
        for (int i = r; i < n; i += e) {
            sub.push_back(a[i]);
        }

        int m = sub.size();
        for (int i = 0; i < m; i++) {
            if (is_prime[sub[i]]) {
                long long L = 0;
                int left = i - 1;
                while (left >= 0 && sub[left] == 1) {
                    L++;
                    left--;
                }

                long long R = 0;
                int right = i + 1;
                while (right < m && sub[right] == 1) {
                    R++;
                    right++;
                }

                total_pairs += (L + 1) * (R + 1) - 1;
            }
        }
    }

    cout << total_pairs << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}