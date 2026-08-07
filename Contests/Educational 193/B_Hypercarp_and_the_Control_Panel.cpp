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
        int n ;
        cin >> n;
        vector<int> colors(n);
        for(int i = 0; i < n; i++) {
            cin >> colors[i];
        }

        vector<pair<int, int>> compressed;

        for(int i = 0; i < n; i++) {
            if (compressed.empty() || compressed.back().first != colors[i]) {
                compressed.push_back({colors[i], 1});
            } else {
                compressed.back().second++;
            }
        }

        int len = compressed.size();
        if(len == 1) {
            cout << 1 << nl;
            continue;;
        }

        int extras = 0;
        for(int i = 0; i < len - 1; i++) {
            if (compressed[i].second >= 2 && compressed[i+1].second >= 2) {
                extras = 2;
                break;
            }
        }

        if(extras == 0) {
            for(int i = 0; i < len; i++) {
                if (compressed[i].second >= 2) {
                    bool canLeft = false;
                    if(i > 0) {
                        if(i == 1)
                            canLeft = true;
                        else if (compressed[i - 2].first != compressed[i].first) canLeft = true;
                    }

                    bool canRight = false;

                    if (i < len - 1)
                    {
                        if (i == len - 2)
                            canRight = true;
                        else if (compressed[i + 2].first != compressed[i].first)
                            canRight = true;
                    }

                    if (canRight || canLeft) {
                        extras = 1;
                        break;
                    }
                }

                
            }
        }

        cout << len + extras << nl;
    }
    return 0;
}