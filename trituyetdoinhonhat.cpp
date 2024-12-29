#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    ll n,k; cin>>n>>k; ll a[n+5];
    For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    a[1]=a[1]-k;
    if(a[1]<0)a[1]=0;
    if(a[1]==0) {cout<<0;return 0;}
    ll re=1,t=1e9+7;
    For(i,1,n)
    {
        re=(re%t*a[i]%t)%t;
    }
    cout<<re;
}


