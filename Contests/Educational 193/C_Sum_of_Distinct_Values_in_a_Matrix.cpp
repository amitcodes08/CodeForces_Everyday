#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<ll> a(x);
    vector<ll> b(y);

    for(int i = 0; i < x; i++)
        cin >> a[i];
    

    for(int i = 0; i < y; i++) 
        cin >> b[i];

    vector<ll> containA, containB, containAB;
    int i = 0, j = 0;

    while(i < x && j < y) {
        if(a[i] < b[j]) {
            containA.push_back(a[i]);
            i++;
        }
        else if(a[i] > b[j]) {
            containB.push_back(b[j]);
            j++;
        }
        else {
            containAB.push_back(a[i]);
            i++, j++;
        }
    }

    while(i < x) {
        containA.push_back(a[i]);
        i++;
    }

    while(j < y) {
        containB.push_back(b[j]);
        j++;
    }

    sort(containA.rbegin(), containA.rend());
    sort(containB.rbegin(), containB.rend());

    vector<ll> taken;

    int Asize = min((int)containA.size(), n);
    int Bsize = min((int)containB.size(), m);


    for(int k = 0; k < Asize; k++)
        taken.push_back(containA[k]);
    
    for(int k = 0; k < Bsize; k++) 
        taken.push_back(containB[k]);

    for(ll v : containAB)
        taken.push_back(v);

    sort(taken.rbegin(), taken.rend());

    ll maxCost = 0;
    int elementsTaken = min((int)taken.size(), n + m - 1);

    for (int k = 0; k < elementsTaken; k++)
        maxCost += taken[k];

    cout << maxCost << nl;
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