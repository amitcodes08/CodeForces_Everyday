#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int M = 998244353;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int oddWays = 0;

    bool isGood0 = true;
    int j = 0;

    for(int i = 0; i < n; i+= 2) {
        char expected = (j % 2 == 0) ? '0' : '1';
        if(s[i] != '?' && s[i] != expected) {
            isGood0 = false;
            break;
        }
        j++;
    }

    if(isGood0) oddWays++;

    bool isGood1 = true;
    j = 0;

    for (int i = 0; i < n; i += 2)
    {
        char expected = (j % 2 == 0) ? '1' : '0';
        if (s[i] != '?' && s[i] != expected)
        {
            isGood1 = false;
            break;
        }
        j++;
    }
    if(isGood1) oddWays++;

    int evenWays = 0;

    isGood0 = true;
    j = 0;

    for (int i = 1; i < n; i += 2)
    {
        char expected = (j % 2 == 0) ? '0' : '1';
        if (s[i] != '?' && s[i] != expected)
        {
            isGood0 = false;
            break;
        }
        j++;
    }

    if (isGood0)
        evenWays++;

    isGood1 = true;
    j = 0;
    for (int i = 1; i < n; i += 2)
    {
        char expected = (j % 2 == 0) ? '1' : '0';
        if (s[i] != '?' && s[i] != expected)
        {
            isGood1 = false;
            break;
        }
        j++;
    }
    if (isGood1)
        evenWays++;

    cout << (oddWays * evenWays) % M << nl;
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