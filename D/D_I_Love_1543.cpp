#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    int total_count = 0;
    int layers = min(n, m) / 2;

    for (int k = 0; k < layers; ++k) {
        string layer_str = "";

        for (int j = k; j <= m - 1 - k; ++j) {
            layer_str += grid[k][j];
        }

        for (int i = k + 1; i <= n - 1 - k; ++i) {
            layer_str += grid[i][m - 1 - k];
        }

        for (int j = m - 2 - k; j >= k; --j) {
            layer_str += grid[n - 1 - k][j];
        }

        for (int i = n - 2 - k; i >= k + 1; --i) {
            layer_str += grid[i][k];
        }

        string cyclic_str = layer_str + layer_str.substr(0, 3);

        for (size_t i = 0; i < layer_str.length(); ++i) {
            if (cyclic_str.substr(i, 4) == "1543") {
                total_count++;
            }
        }
    }

    cout << total_count << "\n";
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