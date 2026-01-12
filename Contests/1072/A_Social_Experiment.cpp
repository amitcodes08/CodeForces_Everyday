#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n == 2) {
            cout << 2 << endl;
            continue;
        }
        else if(n == 3) {
            cout << 3 << endl;
            continue;
        }
        else {
            cout << n%2 << endl;
        }
    }
    return 0;
}