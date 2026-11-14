#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'

const int MOD = 1e9 + 7;

void solve() {
    int n,k;
        string s;
        cin>>n>>k>>s;
        int w=count(s.begin(),s.end(),'W');
        int l=n-w;
        if(w==0){
            printf("%d\n",k==0?0:2*k-1);
            return;
        }
        int f=min(k,l);
        vector<int> gaps;
        int segs=0;
        int first=s.find('W'),last=s.rfind('W');
        int i=first;
        while(i<=last){
            if(s[i]=='W'){
                segs++;
                while(i<=last&&s[i]=='W')i++;
            } else {
                int j=i;
                while(s[j]=='L')j++;
                gaps.push_back(j-i);
                i=j;
            }
        }
        sort(gaps.begin(),gaps.end());
        int rem=f;
        for(int g:gaps){
            if(rem>=g){
                rem-=g;
                segs--;
            } else break;
        }
        printf("%d\n",2*(w+f)-segs);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}