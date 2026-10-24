#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Count the frequency of bets on each day
    map<int, int> counts;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        counts[a]++;
    }

    bool possible = false;
    bool in_chain = false;
    int prev_day = -2;

    for (auto const& [day, count] : counts) {
        // Condition 1: At least 4 bets on the same day
        if (count >= 4) {
            possible = true;
            break;
        }

        // If a day is skipped, the chain of consecutive days breaks
        if (day != prev_day + 1) {
            in_chain = false;
        }

        // Condition 2: Start or end a chain with >= 2 bets
        if (count >= 2) {
            if (in_chain) {
                // We already had >= 2 bets earlier in this consecutive chain
                possible = true;
                break;
            } else {
                // Start a new chain
                in_chain = true;
            }
        }
        // Note: If count == 1, `in_chain` simply maintains its current state 
        // because `day == prev_day + 1` kept it alive.

        prev_day = day;
    }

    if (possible) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}