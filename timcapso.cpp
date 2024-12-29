#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
unordered_map<ll,ll>d;
int main()
{
    ios_base::sync_with_stdio(0)
    ll n,x; cin>>n>>x; ll a[n+5];
    For(i,1,n)
    {
        cin>>a[i];
        ll t=x-a[i];
        if(d[t]>0)
        {
            cout<<d[t]<<' '<<i;return 0;
        }
        d[a[i]]=i;
    }
    cout<<"No solution";
}



