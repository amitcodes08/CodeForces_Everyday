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
        int l, a, b;
        cin >> l >> a >> b;

        vector<bool> pathA(l, false), pathB(l, false);

        int curr = 0;
        while(pathA[curr] == false) {
            pathA[curr] = true;
            curr = (curr + a) % l;
        }

        curr = 0;
        while(pathB[curr] == false) {
            pathB[curr] = true;
            curr = (curr + b) % l;
        }

        int cnt = 0;
        for(int i = 0; i < l; i++) {
            if(pathA[i] && pathB[i])
                cnt++;
        }

        cout << cnt << nl;
    }
    return 0;
}