#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int x;
    cin >> x;

    vector<int> path;
    path.push_back(x);

    for (int i = 0; i < 30; ++i) {
        if ((x & (1 << i)) && (x != (1 << i))) {
            if ((x & ~(1 << i)) != 0) {
                x -= (1 << i);
                path.push_back(x);
            }
        }
    }

    while (x > 1) {
        x /= 2;
        path.push_back(x);
    }

    cout << path.size() << "\n";
    for (int i = 0; i < path.size(); ++i) {
        cout << path[i] << (i == path.size() - 1 ? "" : " ");
    }
    cout << "\n";
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