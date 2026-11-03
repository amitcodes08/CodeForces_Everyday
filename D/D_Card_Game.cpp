#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int rankToVal(char c) {
    return c - '0';
}

void solve() {
    int n;
    cin >> n;
    char trump;
    cin >> trump;

    vector<string> cards(2 * n);
    vector<string> suit_cards[4]; 

    string suits = "CDHS";

    for (int i = 0; i < 2 * n; ++i) {
        cin >> cards[i];
        int s_idx = suits.find(cards[i][1]);
        suit_cards[s_idx].push_back(cards[i]);
    }

    for (int i = 0; i < 4; ++i) {
        sort(suit_cards[i].begin(), suit_cards[i].end(), [](const string &a, const string &b) {
            return rankToVal(a[0]) < rankToVal(b[0]);
        });
    }

    int trump_idx = suits.find(trump);

    vector<string> leftover;
    vector<pair<string, string>> rounds;

    for (int i = 0; i < 4; ++i) {
        if (i == trump_idx) continue;

        int sz = suit_cards[i].size();
        for (int j = 0; j + 1 < sz; j += 2) {
            rounds.push_back({suit_cards[i][j], suit_cards[i][j + 1]});
        }
        if (sz % 2 != 0) {
            leftover.push_back(suit_cards[i].back());
        }
    }

    if (leftover.size() > suit_cards[trump_idx].size()) {
        cout << "IMPOSSIBLE\n";
        return;
    }

    int t_ptr = 0;
    for (const string &card : leftover) {
        rounds.push_back({card, suit_cards[trump_idx][t_ptr]});
        t_ptr++;
    }

    while (t_ptr + 1 < suit_cards[trump_idx].size()) {
        rounds.push_back({suit_cards[trump_idx][t_ptr], suit_cards[trump_idx][t_ptr + 1]});
        t_ptr += 2;
    }

    for (const auto &p : rounds) {
        cout << p.first << " " << p.second << "\n";
    }
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