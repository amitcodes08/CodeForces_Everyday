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
        ll a, b, c;
        cin >> a >> b >> c;

        int arr[3] = {0, 0, 0};

        if(b % 2 == c % 2) {
            arr[0] = 1;
        }

        if(a % 2 == c % 2) {
            arr[1] = 1;
        }

        if(a % 2 == b % 2) {
            arr[2] = 1;
        }

        for(int i = 0; i < 3; i++) {
            cout << arr[i] << " ";
        }
        cout << nl;
    }
    return 0;
}