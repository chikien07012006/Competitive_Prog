#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
unordered_map<ll,ll>d;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,m; cin>>n>>m;
    ll a[n+5]; For(i,1,n) cin>>a[i],d[a[i]]++;
    For(i,1,m)
    {
        ll x; cin>>x;
        cout<<d[x]<<endl;
    }
}




