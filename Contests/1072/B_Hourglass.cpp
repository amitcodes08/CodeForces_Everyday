#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        int flips = m / k;
        int remTime = m % k;

        long long sandTop = s;

        if (flips == 0) {
            sandTop = s;
        }
        else if(k >= s) {
            sandTop = s;
        }
        else {
            if(flips % 2 == 0) {
                sandTop = s;
            }
            else {
                sandTop = k;
            }
        }

        int ans = max(0LL, sandTop - remTime);
        cout << ans << endl;
    }
    return 0;
}