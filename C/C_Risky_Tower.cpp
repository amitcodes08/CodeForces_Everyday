#include <bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 
	ll t;
	cin>>t;
	while(t--){
		ll n,m; 
		cin>>n>>m; 
		vector <ll> v(n+1,0); 
		for(ll i=1;i<=n;i++){
			cin>>v[i];
		}
		vector <vector<ll>> g(n+1,vector <ll> (m+1,0)); 
		for(ll i=1;i<=n;i++){
			for(ll j=1;j<=m;j++){
				cin>>g[i][j];
			}
		}
		ll answer = m; 
		multiset <ll> s; 
		for(ll i=n;i>=1;i--){
			
			for(ll j=1;j<=m;j++){
				ll animal = g[i][j] ;
				s.insert(animal);
				ll k = s.size(); 
				if(k>m){
					ll vl = (*s.begin()) ;
					s.erase(s.find(vl));
				}
			}
			ll limit = v[i]; 
			ll count = 0 ; 
			for(auto it=s.rbegin();it!=s.rend();it++){
				ll number = (*it);
				limit = limit - number ; 
				count++; 
				if(limit<=0){
					answer = min(answer,count); 
				} 
			}
			
			
		}
		
		cout<<answer; 
		cout<<"\n";
		
	
	}
	
	
	
	
	return 0; 
}