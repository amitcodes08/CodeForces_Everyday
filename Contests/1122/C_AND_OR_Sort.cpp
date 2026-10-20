#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int zeros = 0;

        for(char c : s) {
            if (c == '0') zeros++;
        }

        if (s[0] == '1') {
            cout << zeros << "\n";
        }
        else {
            int rightZeros = zeros;
        int leftOnes = 0;

        int minOps = rightZeros + leftOnes;

        for(int i = 0; i < n; i++) {
            if (s[i] == '0') {
                rightZeros--;
            } else {
                leftOnes++;
            }
            minOps = min(minOps, rightZeros + leftOnes);
        }

        cout << minOps << "\n";
        }

        
    }
    return 0;
}