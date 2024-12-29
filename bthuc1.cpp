#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
ll d[105],h=1e9+7;;
int main()
{
    //freopen("thuong.inp","r",stdin);
    //freopen("thuong.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    For(i,1,n-2)
    For(j,i+1,n-1)
    For(k,j+1,n)
    re=re%h+(a[i]%h*(a[j]*a[k]-1)%h)%h;
    cout<<re;
}





