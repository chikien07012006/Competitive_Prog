#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
stack<ll>d,d1,d4,d3;
vector<ll>mintrai,minphai,maxtrai,maxphai;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    d.push(0);
    a[0]=0;
    For(i,1,n)
    {
        while(a[i]<a[d.top()])
        {
            d.pop();
        }
        mintrai.push_back(d.top());
        d.push(i);
    }
    d1.push(n+1);
    a[n+1]=0;
    for(ll i=n;i>=1;i--)
    {
        while(a[i]<=a[d1.top()])
        {
            d1.pop();
        }
        minphai.push_back(d1.top());
        d1.push(i);
    }
    d3.push(0);
    a[0]=1e18;
    For(i,1,n)
    {
        while(a[i]>a[d3.top()])
        {
            d3.pop();
        }
        maxtrai.push_back(d3.top());
        d3.push(i);
    }
    d4.push(n+1);
    a[n+1]=1e18;
    for(ll i=n;i>=1;i--)
    {
        while(a[i]>=a[d4.top()])
        {
            d4.pop();
        }
        maxphai.push_back(d4.top());
        d4.push(i);
    }
    ll ma=0,mi=0;
    For(i,0,n-1)
    {
        mi=mi+a[i+1]*(i+1-mintrai[i])*(minphai[n-i-1]-i-1);
    }
    For(i,0,n-1)
    {
        ma=ma+a[i+1]*(i+1-maxtrai[i])*(maxphai[n-i-1]-i-1);
    }
    cout<<ma-mi;
}
//51
