#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t, n, i, j, f;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        f=0;
        ll a[n], p[n], q[n], pair[n+1], v[n+1];
        ll c[n+1];
        
        priority_queue<ll> q1;
        
        for(i=0; i<=n; i++)
        {
            c[i]=0;
            v[i]=false;
        }
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            c[a[i]]++;
        }
        
        for(i=1; i<=n; i++){
            if(c[i]==0){
                q1.push(i);
            }
        }
        
        for(i=n; i>=1; i--){
            if(c[i]==1){
                pair[i]=i;
            }else if(c[i]==2){
                if(q1.top()<i){
                    pair[i]=q1.top();
                    pair[q1.top()]=i;
                    q1.pop();
                }else{
                    f++;
                    break;
                }
            }else if(c[i]>2){
                f++;
                break;
            }
        }
        
        if(f>0){
            cout<<"NO\n";
            continue;
        }
        
        cout<<"YES\n";
        
        for(i=0; i<n; i++)
        {
            if(v[a[i]]==false){
                p[i]=a[i];
                q[i]=pair[a[i]];
                v[a[i]]=true;
            }else{
                p[i]=pair[a[i]];
                q[i]=a[i];
            }
            
        }
        
        for(i=0; i<n; i++)
        cout<<p[i]<<" ";
        cout<<"\n";
        for(i=0; i<n; i++)
        cout<<q[i]<<" ";
        
        cout<<"\n";
        
    }
}