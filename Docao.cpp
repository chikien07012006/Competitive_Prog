#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll uoc[1000005];
void build()
{
    For(i,2,1e6)
    {
        for(ll j=i*i;j<=1e6;j=j+i)
        {
            uoc[j]+=i;
            if(j/i!=i)uoc[j]+=j/i;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,d=0; cin>>n; ll a[n+5];
    build();
    For(i,1,n)
    {
        cin>>a[i];
        if(2*a[i]>uoc[a[i]]+1+a[i])d++;
    }
    cout<<d;
}

