#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n; 
        cin >> n;

        string s; 
        cin >> s;

        vector<int> T, M;

        for(int i = 0; i < n; i++){
            if(s[i] == 'T'){
                T.push_back(i);
            }else{
                M.push_back(i);
            }
        }

        bool ans = true;

        if(T.size() != M.size() * 2){
            ans = false;
        }else{
            int x = M.size();

            for(int i = 0; i < x; i++){
                if(!(T[i] < M[i] && M[i] < T[i + x])){
                    ans = false;
                }
            }
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}