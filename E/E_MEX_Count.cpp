#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Size arrays to n + 2 safely
    vector<int> freq(n + 2, 0);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x <= n + 1) {
            freq[x]++;
        }
    }
    
    // Smallest non-negative integer missing from array
    int M = 0;
    while (freq[M] > 0) {
        M++;
    }
    
    // Difference array size n + 3 to safely accommodate diff[R + 1] up to n + 1
    vector<int> diff(n + 3, 0);
    
    for (int x = 0; x <= M; ++x) {
        int L = freq[x];      // Must remove all occurrences of x
        int R = n - x;        // Cannot remove so many that fewer than x elements remain
        
        if (L <= R) {
            diff[L]++;
            if (R + 1 <= n + 1) {
                diff[R + 1]--;
            }
        }
    }
    
    // Prefix sum to compute results for k = 0 to n
    int current_mex_count = 0;
    for (int k = 0; k <= n; ++k) {
        current_mex_count += diff[k];
        cout << current_mex_count << (k == n ? "" : " ");
    }
    cout << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}