#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<int> is_peak(n, 0);
    for (int i = 1; i < n - 1; ++i) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            is_peak[i] = 1;
        }
    }
    
    int current_peaks = 0;
    for (int i = 1; i <= k - 2; ++i) {
        current_peaks += is_peak[i];
    }
    
    int max_peaks = current_peaks;
    int best_l = 0;
    
    for (int l = 1; l <= n - k; ++l) {
        current_peaks -= is_peak[l];
        current_peaks += is_peak[l + k - 2];
        
        if (current_peaks > max_peaks) {
            max_peaks = current_peaks;
            best_l = l;
        }
    }
    
    cout << max_peaks + 1 << " " << best_l + 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}