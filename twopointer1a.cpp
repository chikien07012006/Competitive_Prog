#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>c;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    ll n,m; cin>>n>>m; ll a[n+5],b[m+5];
    For(i,1,n) cin>>a[i],c.push_back(a[i]);
    For(i,1,m) cin>>b[i],c.push_back(b[i]);
    sort(c.begin(),c.end());
    For(i,0,c.size()-1) cout<<c[i]<<' ';
}

