#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> points_arr;

        points_arr.push_back(0);     

        for (int i = 0; i < n; i++)   
        {
            long long point;
            cin >> point;                
            points_arr.push_back(point); 
        }

        points_arr.push_back(x);
        n = points_arr.size();

        long long max_distance = INT_MIN;

        for(int i = 1; i < n; i++) {
            if(i == n - 1) {
                max_distance = max(max_distance, 2*(points_arr[i] - points_arr[i-1]));
            }
            else {
                max_distance = max(max_distance, points_arr[i] - points_arr[i-1]);
            }
        }

        cout << max_distance << endl;

    }
    return 0;
}