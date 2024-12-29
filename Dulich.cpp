#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,k,t=1,re; cin>>n>>m>>k; ll a[n+5],b[n+5];
    char d[m+5];
    For(i,1,n) cin>>a[i]>>b[i];
    For(i,1,m) cin>>d[i];
    For(v,1,k)
    {
        For(i,1,m)
        {
            if(d[i]=='L')
            {
                t=a[t];
                re=t;
            }
            if(d[i]=='R')
            {
                t=b[t];
                re=t;
            }
        }
    }
    cout<<re;
}

