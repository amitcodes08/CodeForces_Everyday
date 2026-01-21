#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        int countzero = 0;
        int ans = 0;
        for(int i = 0 ; i < n; i++) {
            cin >> a[i];

            if(a[i] == 0) {
                countzero++;
            }
            else {
                countzero = 0;
            }

            ans = max(ans, countzero);
        }

        cout << ans << endl;
    }
    return 0;
}