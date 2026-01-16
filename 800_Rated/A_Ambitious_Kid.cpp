#include<bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        int smallestNo = INT_MAX;
        vector<int> arr(n);

        for(int i = 0 ; i < n; i++) {
            cin >> arr[i];
            smallestNo = min(smallestNo, abs(arr[i]));
        }

        cout << smallestNo << endl;

    return 0;
}