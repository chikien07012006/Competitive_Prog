#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<ll,ll>check;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,x; cin>>n>>x;
    For(i,1,n) 
    {
        ll j; cin>>j; 
        if(check[x-j]!=0)
        {
            cout<<check[x-j]<<' '<<i;
            return 0;
        }
        check[j]=i;
    }
    cout<<"No solution";
}