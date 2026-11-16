#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] > b[i][j]) {
                swap(a[i][j], b[i][j]);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (j + 1 < m) {
                if (a[i][j] >= a[i][j + 1] || b[i][j] >= b[i][j + 1]) {
                    cout << "Impossible\n";
                    return 0;
                }
            }
            if (i + 1 < n) {
                if (a[i][j] >= a[i + 1][j] || b[i][j] >= b[i + 1][j]) {
                    cout << "Impossible\n";
                    return 0;
                }
            }
        }
    }

    cout << "Possible\n";
    return 0;
}