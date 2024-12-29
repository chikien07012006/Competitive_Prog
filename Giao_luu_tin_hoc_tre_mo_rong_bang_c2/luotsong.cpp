#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>p;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,s=0,dem=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    For(i,1,n)
    {
        if(a[i]<0)p.push_back(a[i]);
        s+=a[i];
        dem++;
        if(s<0)
        {
            s=s-p[0];
            dem--;
            p.erase(p.begin());
        }
        sort(p.begin(),p.end());
    }
    cout<<dem;
}
