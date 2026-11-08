#include <bits/stdc++.h>
using namespace std;

bool ok(int s, int p) {
    int i = (s / 50) % 475;
    for (int j = 0; j < 25; j++) {
        i = (i * 96 + 42) % 475;
        if (26 + i == p) return true;
    }
    return false;
}

int main() {
    int p, x, y;
    cin >> p >> x >> y;
    for (int k = 0;; k++) {
        for (int s = x + 100 * k; s >= y; s -= 50) {
            if (ok(s, p)) {
                cout << k << endl;
                return 0;
            }
        }
    }
}