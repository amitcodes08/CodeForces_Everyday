#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n , k;
    cin >> n >> k;

    if (n == k)
    {
        cout << 0 << endl;
        return;
    }

    for(int depth = 1; depth <= 60; depth++) {
        long long depthLevel = (1LL << depth);

        long long firstHalf = n / depthLevel;
        long long secondHalf = (n + depthLevel - 1) / depthLevel;

        if(firstHalf == k || secondHalf == k) {
            cout << depth << endl;
            return;
        }

        if(secondHalf < k) {
            break;
        }
    }

    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}