#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<int> v;

        for (int i = 0; i < n;) {
            int j = i;
            while (j < n && a[j] == a[i]) j++;
            if (j - i >= k) v.push_back(a[i]);
            i = j;
        }

        if(v.empty()) {
            cout << -1 << endl;
            continue;
        }

        int bl = v[0], br = v[0], s=v[0];

        for(int i = 1; i < v.size(); i++) {
            if(v[i] != v[i - 1] + 1) s = v[i];
            if(v[i] - s > br - bl) {
                bl = s;
                br = v[i];
            }
        }

        cout << bl << " " << br << endl;
    }
}