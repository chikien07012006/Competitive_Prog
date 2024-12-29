#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;++i)
deque<ll>d;
int main()
{
    freopen("TRATIENAN.inp","r",stdin);
    freopen("TRATIENAN.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,k,re=1e18; cin>>n>>k; ll a[n+5],b[n+5];
    For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    For(i,1,n-1) b[i]=a[i+1]-a[i];
    For(i,1,n-k-2)
    {
        while(!d.empty()&&b[d.back()]>b[i])d.pop_back();
        d.push_back(i);
    }
    For(i,n-k-1,n-1)
    {
        while(!d.empty()&&b[d.back()]>b[i])d.pop_back();
        if(d.front()+k-1<i) d.pop_front();
        re=min(re,b[d.front()]+(a[i+1]-a[i+2-n+k]));
        d.push_back(i);
    }
    cout<<re;
}




