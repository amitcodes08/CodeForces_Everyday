#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + (s[i] == 'W');
        }

        int minimum_cells = k;
        for (int i = 0; i <= n - k; i++)
        {
            int current_whites = prefix[i + k] - prefix[i];
            if (current_whites < minimum_cells)
            {
                minimum_cells = current_whites;
            }
        }

        cout << minimum_cells << "\n";
    }
    return 0;
}