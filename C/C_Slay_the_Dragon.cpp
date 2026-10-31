#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n);
    long long total_sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }

    sort(a.begin(), a.end());

    int m;
    cin >> m;

    while (m--) {
        long long x, y;
        cin >> x >> y;

        auto it = lower_bound(a.begin(), a.end(), x);

        long long min_coins = -1;

        if (it != a.end()) {
            long long hero_strength = *it;
            long long cost_x = max(0LL, x - hero_strength);
            long long cost_y = max(0LL, y - (total_sum - hero_strength));
            min_coins = cost_x + cost_y;
        }

        if (it != a.begin()) {
            long long hero_strength = *(it - 1);
            long long cost_x = max(0LL, x - hero_strength);
            long long cost_y = max(0LL, y - (total_sum - hero_strength));
            long long current_cost = cost_x + cost_y;

            if (min_coins == -1 || current_cost < min_coins) {
                min_coins = current_cost;
            }
        }

        cout << min_coins << "\n";
    }

    return 0;
}