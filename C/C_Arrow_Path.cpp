#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

bool check(int i, int j, const vector<string>& a, int n, int action, vector<vector<bool>>& visited) {
    if (i < 0 || i >= 2 || j < 0 || j >= n) {
        return false;
    }

    if (visited[i][j]) {
        return false;
    }

    if (i == 1 && j == n - 1) {
        return true;
    }

    visited[i][j] = true;

    if (action == 0) {
        return check(i, j + 1, a, n, 1, visited) || 
               check(i + 1, j, a, n, 1, visited) || 
               check(i - 1, j, a, n, 1, visited) || 
               check(i, j - 1, a, n, 1, visited);
    } else {
        if (a[i][j] == '>') {
            return check(i, j + 1, a, n, 0, visited);
        } else if (a[i][j] == '<') {
            return check(i, j - 1, a, n, 0, visited);
        }
    }

    return false;
}

void solve() {
    int n;
    cin >> n;
    
    vector<string> a(2);
    cin >> a[0] >> a[1];

    vector<vector<bool>> visited(2, vector<bool>(n, false));

    if (check(0, 0, a, n, 0, visited)) {
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }
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