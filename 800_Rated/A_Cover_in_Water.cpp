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

        bool threeConsectuiveDots = false;
        int emptyDots = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == '.' && i + 1 < n && s[i+1] == '.' && i + 2 < n && s[i+2] == '.') {
                threeConsectuiveDots = true;
                break;
            }
            if(s[i] == '.')
                emptyDots++;
        }

        if (threeConsectuiveDots) {
            cout << 2 << endl;
        }
        else {
            cout << emptyDots << endl;
        }
    }
    return 0;
}