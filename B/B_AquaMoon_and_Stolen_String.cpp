#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;

    vector<long long> char_sum(m, 0);

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < m; ++j) {
            char_sum[j] += s[j];
        }
    }

    for (int i = 0; i < n - 1; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < m; ++j) {
            char_sum[j] -= s[j];
        }
    }

    string stolen_string = "";
    for (int j = 0; j < m; ++j) {
        stolen_string += static_cast<char>(char_sum[j]);
    }

    cout << stolen_string << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}