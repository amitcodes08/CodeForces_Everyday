#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int longestSeq = 0;
        int currentSeq = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '#') {
                currentSeq++;
            }
            else {
                currentSeq = 0;
            }
            longestSeq = max(longestSeq, currentSeq);
        }
        cout << (longestSeq + 1) / 2 << endl;
    }      

    return 0;
}